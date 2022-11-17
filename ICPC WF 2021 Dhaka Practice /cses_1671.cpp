#include <bits/stdc++.h>
using namespace std;
#define pi pair<long long, long long>
priority_queue<pi, vector<pi>, greater<pi>>pq;
vector<long long> dist(100000+1, LONG_MAX);
bool processed[100000+1];
void shortestPath(vector<pi> adj[], long long V,
                  long long src)
{



    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty()) {

        long long u = pq.top().second;
        // long long w = pq.top().first
        pq.pop();
        if (processed[u]) continue;
        processed[u] = true;
        // if (w > dis[u])continue;

        for (auto x : adj[u]) {

            long long v = x.first;
            long long weight = x.second;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    for (long long i = 1; i <= V; ++i)
        cout<<dist[i]<<" ";
}

int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m, x,y,w;
    cin>>n>>m;
    vector<pi> v[n+1];
    for(long long i=0; i<m; i++){
        cin>>x>>y>>w;
        v[x].push_back({y, w});
    }
    for(auto u: v)
        sort(u.rbegin(), u.rend());
    shortestPath(v,  n, 1);

    return 0;
}
