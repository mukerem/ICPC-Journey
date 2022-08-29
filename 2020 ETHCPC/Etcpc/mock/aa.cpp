#include <bits/stdc++.h>
using  namespace std;

int main(){
    ifstream in("mex.in");
    int t, n, q,x, a,b;
    in >> t;
    while(t--){
        map<int, int>m;
        in >> n >>  q;
        for(int i=1; i<= n; i++){
            in>>x;
            m[x] = i;
        }
        for(int i = 0; i<q; i++){
            in>>a>>b;
            if(a ==1 && b == n){
                cout<<n+1<<endl;
                continue;

            }
            for(auto u: m){
                if(a <= u.second && u.second <= b )continue;
                cout<<u.first<<endl;
                break;
            }
        }

    }
}
