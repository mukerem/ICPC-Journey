#include <bits/stdc++.h>
using namespace std;

vector<int> dist;
vector<int> DijkstraSP(vector< vector<pair<int, int> > > &adjList, int start)
    {

    priority_queue<pair<int, int>, vector< pair<int, int> >, greater<pair<int, int> > > pq;

    pq.push(make_pair(start, 0));
    dist[start] = 0;

    while(pq.empty() == false)
        {
        int u = pq.top().first;
        pq.pop();

        for(int i = 0; i < adjList[u].size(); i++)
            {
            int v = adjList[u][i].first;
            int weight = adjList[u][i].second;

            if(dist[v] > dist[u] + weight)
                {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(v, dist[v]));
                }
            }
        }

    return dist;
}
int dp[2505];
int main()
{
     int v, k, x;
     cin>>v>>k;
     vector< vector<pair<int, int> > > adjList(v*v);
     vector<pair<int, int>>p[k+1];
    int n = adjList.size();
    for(int i = 0; i < n; i++)
        dist.push_back(1000000007);
     for(int i=0; i<v; i++){
         for(int j=0; j<v; j++){
             cin>>x;
             p[x].push_back({i, j});
         }
     }

     int d, q, r;
     for(int i=1; i<k; i++){
         if(p[i].size() == 0){cout<<-1;return 0;}
         for(auto u: p[i]){
             q = u.first * v + u.second;
             if(p[i+1].size() == 0){cout<<-1;return 0;}
             for(auto vv: p[i+1]){
               r = vv.first * v + vv.second;
               d = abs(u.first-vv.first) + abs(u.second - vv.second);
               adjList[q].push_back({r, d});
             }
         }
     }
     int path = 1000000007;
     for(auto s: p[1]){
        vector<int> dist = DijkstraSP(adjList, s.first*v + s.second);
        for(auto e: p[k]) path = min(path, dist[e.first*v + e.second]);
     }
    if(path == 1000000007)cout<<-1;
    else cout<<path;

}
