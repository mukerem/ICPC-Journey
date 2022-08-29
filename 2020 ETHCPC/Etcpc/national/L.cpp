#include <bits/stdc++.h>
using  namespace std;

vector<int> adj[1000010];

int main(){
    freopen("hello.in", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<int> vec;
        cin >> n;
        for(int i = 0; i < n; i++){
            int in;
            cin >> in;
            vec.push_back(in);
        }
        int u, v;
        for(int i = 0; i < n - 1; i++){
            cin >> u >> v;
            adj[v].push_back(u);
        }
        int q;
        cin >> q;
        int x, val;
        while(q--){
            cin >> x >> val;
            cout << my(x, val) << endl;
        }

    }
}
