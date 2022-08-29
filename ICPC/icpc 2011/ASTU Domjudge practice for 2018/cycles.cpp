
// C++ program to find minimum average
// weight of a cycle in connected and
// directed graph.
#include<bits/stdc++.h>
using namespace std;

int V;
const int MAX = 100;

// a struct to represent edges
struct edge
{
    int from, weight;
};

// vector to store edges
vector <edge> edges[MAX];

void addedge(int u,int v,int w)
{
    edges[v].push_back({u, w});
}

// calculates the shortest path
void shortestpath(int dp[][MAX] )
{
    // initializing all distances as -1
    for (int i=0; i<=V; i++)
        for (int j=0; j<V; j++)
            dp[i][j] = -1;

    // shortest distance from first vertex
    // to itself consisting of 0 edges
    dp[0][0] = 0;

    // filling up the dp table
    for (int i=1; i<=V; i++)
    {
        for (int j=0; j<V; j++)
        {
            for (int k=0; k<edges[j].size(); k++)
            {
                if (dp[i-1][edges[j][k].from] != -1)
                {
                    int curr_wt = dp[i-1][edges[j][k].from] +
                                  edges[j][k].weight;

                    if (dp[i][j] == -1)
                        dp[i][j] = curr_wt;
                    else
                       dp[i][j] = min(dp[i][j], curr_wt);
                }
            }
        }
    }
}

// Returns minimum value of average weight of a
// cycle in graph.
void minAvgWeight()
{
    int dp[MAX+1][MAX];
    shortestpath(dp);

    // array to store the avg values
    double avg[MAX];
    //long long ans[MAX][2] = {0};
    for (int i=0; i<V; i++)
        avg[i] = -1;

    // Compute average values for all vertices using
    // weights of shortest paths store in dp.
    //long long numerator = 0, denominator = 0;
    for (int i=0; i<V; i++)
    {
        if (dp[V][i] != -1)
        {
            for (int j=0; j<V; j++)
                if (dp[j][i] != -1)
                    /*{
                    if (avg[i] < ((double)dp[V][i]-dp[j][i])/(V-j) ){
                        avg[i] = ((double)dp[V][i]-dp[j][i])/(V-j);
                        ans[i][0] = dp[V][i]-dp[j][i];
                        ans[i][1] = (V-j);
                    }
                }*/
                avg[i] = max(avg[i],((double)dp[V][i]-dp[j][i])/(V-j));
        }
    }

    // Find minimum value in avg[]
    double result = avg[0];
//    numerator = ans[0][0];
//    denominator = ans[0][1];
    for (int i=0; i<V; i++)
        if (avg[i] != -1 && avg[i] < result){
            result = avg[i];
//            numerator = ans[i][0];
//            denominator = ans[i][1];
        }


    //return result;
    cout<<endl<<result<<endl;
//    long long gcd = __gcd(numerator, denominator);
//    if (result == -1) cout<<"0 0"<<endl;
//    else cout<<numerator/gcd<<" "<<denominator/gcd<<endl;
}

// Driver function
int main()
{
    long long n,m,u,v,w;
    cin>>n>>m;
    V = n;
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        addedge(u,v,w);
    }
    minAvgWeight();

    return 0;
}

