#include<bits/stdc++.h>
using namespace std;
#define MAX  4002
bool g[MAX][MAX];
map<long long, long long>p;
long long mod = 1000000007;
long long power(long long r, long long n){
    if(n == 0)return 1;
    if(n%2 == 0){
        long long v = power(r, n/2);
        return (v*v)%mod;
    }
    else{
        return (power(r, n-1) * r)%mod;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    int v,e,q, x, y, a, vert;
    cin>>v>>e>>q;
    bool edge = true;
    bool transpose = false;
    //vert = v;
    for(int i=0; i<e; i++){
        cin>>x>>y;
        g[x][y] = true;
    }
    while(q--){
        cin>>a;
        if(a == 1){
            if(edge == false)
             for(int i=0; i<v; i++){
                 g[v][i] = !edge;
                 g[i][v] = !edge;
            }
            v++;

        }
        else if(a == 2){
            cin>>x>>y;
            if(transpose) g[y][x] = edge;
            else g[x][y] = edge;
        }
        else if(a == 3){
            cin>>x;
            for(int i=0; i<v; i++)
                g[x][i] = !edge;
            for(int i=0; i<v; i++)
                g[i][x] = !edge;
        }
        else if(a == 4){
            cin>>x>>y;
            if(transpose)g[y][x] = !edge;
            else g[x][y] = !edge;
        }
        else if(a == 5){
            transpose = !transpose;
        }
        else if(a == 6){
            edge = !edge;
        }
    }

    cout<<v<<endl;
    long long z = 1;
    for(int i=0; i<MAX; i++){
        p[i] = z;
        z = (z * 7) % mod;
    }
    if(transpose){
        for(int i = 0; i<v; i++){
            long long h = 0, r = 0;
            for(int j=0; j<v; j++){
                if(i==j)continue;
                if(g[j][i] == edge){
                    h += p[r] * j;
                    h = h % mod;
                    r++;
                }
            }
            cout<<r<<" "<<h<<endl;
        }
    }
    else{
        for(int i = 0; i<v; i++){
            long long h = 0, r = 0;
            for(int j=0; j<v; j++){
                if(i==j)continue;
                if(g[i][j] == edge){
                    h += p[r] * j;
                    h = h % mod;
                    r++;
                }
            }
            cout<<r<<" "<<h<<endl;
        }
    }
}
