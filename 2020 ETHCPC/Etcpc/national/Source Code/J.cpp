#include <bits/stdc++.h>
using  namespace std;
map<int, int> m;
int main(){
    //freopen("sticks.in", "r", stdin);
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        while(n--){
            int x; cin >> x;
            m[x]++;
        }
        int ans = 0, c = 0;

        for(auto i: m){
            c += i.second / 2;
        }
        ans = c / 2;
        cout << ans << endl;
        m.clear();
    }
}
