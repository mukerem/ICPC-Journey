// Time: 2020-12-17 20:37:16
// title: Integer Division
// language: C++


#include<bits/stdc++.h>
using namespace std;
map<long long, long long>m;
int main(){
    long long n, d, x, c;
    cin>>n>>d;
    for(int i=0; i<n; i++){
        cin>>x;
        c = x/d;
        if((c+1) * d <= x)c++;
        if((c) * d > x)c--;
        m[c] += 1;

    }
    long long tot = 0;
    for(auto u: m){
        tot += (u.second) * (u.second - 1)/2;
        //cout<<u.first<<" "<<u.second<<endl;
    }
    cout<<tot<<endl;
}
