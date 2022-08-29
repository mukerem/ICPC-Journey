#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];
void dfs(int s)
{
    stack<int> nodes;
    nodes.push(s);
    while(!nodes.empty())
    {
        s = nodes.top();
        nodes.pop();
        if (!visited[s])
        {
            visited[s] = true;
            cout<<s <<" ";
        }

        for(auto u: adj[s])
            if(!visited[u])
            {
                nodes.push(u);

            }
    }
}

int main()
{
    int t, v, e, a,b ;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int minn = 1000;
        cin>>v>>e;
        for(int j=0; j<e; j++)
        {

            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
            minn = min(minn, a);
            minn = min(minn, b);
        }

        for(auto &u: adj)
            sort(u.rbegin(), u.rend());
        dfs(minn);
        cout<<endl;
        for(auto &u: adj)u.clear();
        fill(visited, visited + 1005, false);
    }


}
