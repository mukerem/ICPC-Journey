#include <bits/stdc++.h>
using  namespace std;



int main(){
    freopen("hello.in", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n + 5);
        for(int i = 1; i <= n; i++){
            int in;
            cin >> a[i];
        }
        int u, v;
        vector<int> tree(n + 5);
        for(int i = 1; i <= n; i++) tree[i] = i;
        for(int i = 1; i <= n - 1; i++){
            cin >> u >> v;
            if(u > v){
                tree[u] = v;
            }else tree[v] = u;
        }


        int q;
        cin >> q;
        int x, val;
        while(q--){
            cin >> x >> val;
            long long temp = a[x], ans = -1, curr = x;
            while(true){
                if(temp == val){
                    ans = curr;
                    break;
                }
                if(curr == tree[curr]) break;
                if(temp > val) break;
                if(temp * a[tree[curr]] > val) break;
                else temp  = temp * a[tree[curr]];
                curr = tree[curr];
            }
            cout << ans << endl;
        }

    }

}
