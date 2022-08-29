#include <bits/stdc++.h>
using namespace std;

#define N 1005
#define INF 1e9

vector<pair<int, int>> adj[N];
int dist[N];
bool visited[N];

void clear_all()
{
    for(auto &a: adj){
        a.clear();
    }

}

void dij(int start){
    fill(dist, dist+N, INF);
    dist[start] = 0;
    multiset<pair<int, int>> s;
    s.insert({0, start});
    while(!s.empty()){
        auto p = *s.begin();
        s.erase(s.begin());
        int x = p.second;
        if(visited[x]) continue;
        visited[x] = true;

        for(auto u: adj[x]){
            int e = u.first;
            int w = u.second;
            if(dist[x]+w < dist[e]){
                dist[e] = dist[x]+w;
                s.insert({dist[e], e});
            }
        }
    }
}

int main()
{
    int c, r;
    while(cin >> c >> r && c != -1){
        int a, b, l;
        for(int i=0; i<r; i++){
            cin >> a >> b >> l;
            adj[a].push_back({b, l});
            adj[b].push_back({a, l});
        }

        int w; cin >> w;
        int arr[w];
        for(int i=0; i<w; i++){
            cin >> arr[i];
        }

        int d;
        cin >> d;

        int m = INF;
        for(auto i: arr){
            fill(visited, visited+N, 0);
            dij(i);
            m = min(m, dist[d]);
        }
        cout << d << endl;

    }



    return 0;
}





































