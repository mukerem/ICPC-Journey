#include <bits/stdc++.h>
using  namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ifstream in("mult.in");
    int t, n, k;
    in >> t;
    for(int j=0; j<t; j++){
        in >> n >> k;
        vector<long long> v;
        while(n--){
            long long x; in >> x; v.push_back(x);
        }
        sort(v.rbegin(), v.rend());
        long long ans = 1;
        for(int i=0; i<k; i++){
            ans = ans * v[i];
        }

        cout << ans << endl;

    }
}

