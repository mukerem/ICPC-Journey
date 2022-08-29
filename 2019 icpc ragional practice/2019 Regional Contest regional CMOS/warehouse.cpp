#include <bits/stdc++.h>
using namespace std;

#define N 1005
#define INF 1e9

vector<int> adj[N];
int dist[N];

void bfs(int s, int d)
{
    fill(dist, dist+N, -1);
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    while(!q.empty()){
        int current = q.front(); q.pop();
        for(auto u: adj[current]){
                if(dist[u] == -1){
                    dist[u] = dist[current] + 1;
                    q.push(u);
                }
        }
    }
}

int main()
{
    int c, r;
    while(cin >> c && c != -1 && cin >> r){
        int a, b, l;
        for(int i=0; i<r; i++){
            cin >> a >> b >> l;
            adj[a].push_back(b);
            adj[b].push_back(a);
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
            bfs(i, d);
            if(dist[d] < m){
                m = i;
            }
        }
        cout << m << endl;


    }
}
