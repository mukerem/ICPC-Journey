#include <bits/stdc++.h>
using  namespace std;

int main(){
    ifstream in("piles.in");
    int t, n;
    vector<int> v, a;
    in >> t;
    while(t--){
        in >> n;
        for(int i=0; i<n; i++){
            int x; in >> x; v.push_back(x);
        }

        for(int i=0; i<n; i++){
            int x; in >> x; a.push_back(x);
        }
        bool b = 1;
        for(int i=n-1; i>0; i--){
            if(v[i] <= v[i-1]){
                if(v[i-1]-v[i] < a[i-1]) v[i-1] = v[i]-1;
                else {
                    cout << "NO\n";
                    b = 0;
                    break;
                }
            }
        }
        if(b) cout << "YES\n";
        v.clear();
        a.clear();
    }
}

