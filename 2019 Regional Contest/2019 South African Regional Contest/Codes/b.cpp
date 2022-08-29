#include <bits/stdc++.h>
#define N 50005
#define INF 1e9



using namespace std;

typedef long long ll;


vector<pair<int , int> > adj[N];
map <int, string> st;

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
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        string name;
        st.insert({i, name});
    }
    

    for(int i = 1; i <= n - 1; i++){
        cin >> a >> b;
        adj[a].push_back(make_pair(b, 1));
        adj[b].push_back(make_pair(a, 1));
    }
    
    vector<int> temp;
    for(int i = 0; i < q; i++){
        int t, i; string str;
        cin >> t >> i >> str;
        if(t == 2){
            int len = str.length();

            for(auto u: st){
                if(u.second.substr(0, len) == str){
                    temp.push_back(u.first);
                }
            }
        }
    }

    int s, m = 1e9, indexx=-1;
    v.clear();
    for(int i=0; i<N; i++){
        visited[i]=false;
        adj[i].clear();
        
    }


    return 0;
}