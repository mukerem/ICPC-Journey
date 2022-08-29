#include <bits/stdc++.h>
using  namespace std;

vector<int> a, b;

int main(){
    freopen("pcb.in", "r", stdin);
    int t, n, m, x;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector<int> vis(n, 0);
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < m; i++){
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());

        int ans = 0;
        for(int i: b) {
            auto j = lower_bound(a.begin(), a.end(), i);

            while(j != a.end() && vis[j-a.begin()])j++;

            if(j != a.end()){
                vis[j-a.begin()] = 1;
                ans++;
            }
            cout << ans << " ";
        }
        cout << endl;

        a.clear();
        b.clear();
    }
}
