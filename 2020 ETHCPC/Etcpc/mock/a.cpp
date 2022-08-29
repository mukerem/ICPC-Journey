#include <bits/stdc++.h>
using  namespace std;

int main(){
    ifstream in("hello.in");
    int t, n, q;
    in >> t;
    while(t--){

        in >> n >>  q;

        vector<int> v, l, r(n + n);
        vector<bool> vis(n + n);
        for(int i=0; i<n; i++){
            int x; in >> x; v.push_back(x);
        }
        int cur = 1, next = cur + 1;
        for(int i=0; i< n; i++){
            vis[v[i]] = 1;
          while(vis[cur]) cur++;
          l.push_back(cur);


        }
        vector<bool> visr(n + n);
        cur = 1;
         for(int i=n - 1; i >= 0; i--){
          visr[v[i]] = 1;
          while(visr[cur]) cur++;
          //r.push_back(cur);
          r[i] = cur;
        }

        for(int i = 0; i < q; i++){
            int x, y;
            in >> x >> y;
            cout << min(r[x - 1], l[y - 1]) << endl;
        }
    }
}
