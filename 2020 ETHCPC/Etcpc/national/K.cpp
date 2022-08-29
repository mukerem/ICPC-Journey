#include <bits/stdc++.h>
using  namespace std;
vector<tuple<int, int, int>>m;
int main(){
    freopen("hello.in", "r", stdin);
    int test;cin>>test;
    string s;
    iint n,q,l,r;
    for(int i=0; i<10; i++){
            for(int j=0; j<i; j++){
                m.push_back({i-j, j, i});
            }

            }

    while(test--){
        cin>>n>>q;
        cin>>s;
        int x[n];
        for(int i=0; i<n; i++) x[i] = s[i] - '0'
        for(int ii=0; ii<q; ii++){
            cin>>l>>r;
            bool vis[10];
            for(int i=0; i<10; i++)vis[i] = 0;
            for(int i=l; i<= r; i++ )vis[x[i]] = 1;
            ans = true;

        }
    }
}
