#include <bits/stdc++.h>
using  namespace std;
vector<int> v, o, e;

int main(){
    freopen("sum.in", "r", stdin);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            int x; cin >> x; v.push_back(x);
            if(x%2) o.push_back(x);
            else e.push_back(x);
        }
        sort(e.rbegin(), e.rend());
        sort(o.rbegin(), o.rend());
        int i= 0, j = 0;
        for(int k : v){
            if(k % 2) cout << o[j++] << " ";
            else cout << e[i++] << " ";
        }
        cout << endl;

        v.clear();
        e.clear();
        o.clear();
    }
}
