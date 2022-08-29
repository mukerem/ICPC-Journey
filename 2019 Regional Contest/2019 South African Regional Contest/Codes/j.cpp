#include <bits/stdc++.h>
#define N 1005
#define INF 1e9



using namespace std;

typedef long long ll;


vector<pair<int , int> > adj[N];
vector<int> v;
int dist[N];
bool visited[N];

void dij(int start){
    fill(dist, dist + N, INF);
    dist[start] = 0;
    multiset<pair<int, int> > s;
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
            if(dist[x] + w < dist[e]){
                dist[e] = dist[x] + w;
                s.insert({dist[e], e});
            }
        }
    }
}

int main()
{
    
    int x, c, r, w, start, y, a, b, l;
    while(cin >> c && c != -1){
        cin >> r;
        for(int i = 0; i < r; i++){
            cin >> a >> b >> l;
            adj[a].push_back(make_pair(b, l));
            adj[b].push_back(make_pair(a, l));
        }
        cin >> w;
        for(int i = 0; i < w; i++){
            cin >> y;
            v.push_back(y);
        }
        cin >> start;
        dij(start);
        int s, m = 1e9, indexx=-1;
        for(auto u: v){
            s = dist[u];
            if(s < m) {
                m = s;
                indexx = u;
            }
        }
        cout << indexx << endl;
        v.clear();
        for(int i=0; i<N; i++){
            visited[i]=false;
            adj[i].clear();
            
        }

    }
    return 0;
}