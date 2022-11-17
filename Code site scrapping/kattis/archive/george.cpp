// Time: 2022-08-25 12:23:35
// title: George
// language: C++


#include <bits/stdc++.h>
using namespace std;
vector<int> p;
int NO_PARENT = -1;
void printPath(int currentVertex, vector<int> parents)
{
    if(currentVertex == -1)return;
    printPath(parents[currentVertex], parents);
    p.push_back(currentVertex);
}
void dijkstra(vector<vector<int> > adjacencyMatrix ,
              int startVertex, int endIndex)
{
    int nVertices = adjacencyMatrix[0].size();
    vector<int> shortestDistances(nVertices);
    vector<bool> added(nVertices);
    for (int vertexIndex = 0; vertexIndex < nVertices;
         vertexIndex++) {
        shortestDistances[vertexIndex] = INT_MAX;
        added[vertexIndex] = false;
    }
    shortestDistances[startVertex] = 0;
    vector<int> parents(nVertices);

    parents[startVertex] = NO_PARENT;
    for (int i = 1; i < nVertices; i++) {
        int nearestVertex = -1;
        int shortestDistance = INT_MAX;
        for (int vertexIndex = 0; vertexIndex < nVertices;
             vertexIndex++) {
            if (!added[vertexIndex]
                && shortestDistances[vertexIndex]
                       < shortestDistance) {
                nearestVertex = vertexIndex;
                shortestDistance
                    = shortestDistances[vertexIndex];
            }
        }

        added[nearestVertex] = true;
        for (int vertexIndex = 0; vertexIndex < nVertices;
             vertexIndex++) {
            int edgeDistance
                = adjacencyMatrix[nearestVertex]
                                 [vertexIndex];

            if (edgeDistance > 0
                && ((shortestDistance + edgeDistance)
                    < shortestDistances[vertexIndex])) {
                parents[vertexIndex] = nearestVertex;
                shortestDistances[vertexIndex]
                    = shortestDistance + edgeDistance;
            }
        }
    }

    printPath(endIndex, parents);
}

int main()
{
    int n,m,a,b,k,g;
    cin>>n>>m;
    cin>>a>>b>>k>>g;
    vector<int>v1(g);
    for(int i=0; i<g; i++)cin>>v1[i];

    map<pair<int, int>, pair<int, int>>mm;
    int d = 0, t = 0,z,x,y;

    vector<vector<int>> adjacencyMatrix( n+1 , vector<int> (n+1, 0));

    for(int i = 0; i<m; i++){
         cin>>x>>y>>z;
         adjacencyMatrix[x][y] = z;
         adjacencyMatrix[y][x] = z;



    }

    for(int i=1; i<g; i++){
        t += adjacencyMatrix[v1[i]][v1[i-1]];
        mm.insert({{v1[i], v1[i-1]}, {d - k, t - k}});
        mm.insert({{v1[i-1], v1[i]}, {d - k, t - k}});
        d = t;
    }

    dijkstra(adjacencyMatrix, a, b);
    t = 0;
    int u,v;

    for (int i = 1; i<p.size(); i++){
        u = p[i],
        v = p[i-1];
        //cout<<u<<" "<<v<<" "<<adjacencyMatrix[u][v]<<endl;
        //cout<<"*** "<<mm[{u, v}].first<<" "<<mm[{u, v}].second<<endl;
        if(mm[{u, v}].first <= t &&
        t < mm[{u, v}].second){
            t = mm[{u, v}].second;
        }
        t += adjacencyMatrix[u][v];

    }

    //for(auto u: p)cout<<u<<" ";
    cout<<t<<endl;
    return 0;
}
