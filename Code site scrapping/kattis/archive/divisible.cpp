// Time: 2021-09-20 19:53:32
// title: Divisible Subsequences
// language: C++


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long d, n;
        cin>>d>>n;
        long long a[n], b[n], s=0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            s += a[i];
            b[i] = s;
        }
        map<long long, int> m;
        for(auto u: b){
            m[u%d]++;
        }
        long long total = 0;
        for(auto u:m){
            total += (u.second) * (u.second - 1)/2;
        }
        if(m[0]) total += m[0];
        cout<<total<<endl;
        //for(auto u: b)cout<<u<<" ";cout<<endl;
        //for(auto u:m) cout<<u.first<<" "<<u.second<<endl;cout<<endl<<endl;

    }
}
