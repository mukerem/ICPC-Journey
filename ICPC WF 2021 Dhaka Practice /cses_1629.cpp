#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, a, b;
    cin>>n;
    vector<pair<int, int>> d;

    for(int i=0; i<n; i++){
        cin>>a>>b;
        d.push_back({a, b});
    }
    sort(d.begin(), d.end());
    int c = 1, f;

    int ct=0;
    auto u=d.begin();
    ct = u->second;
    //cout<<u->first<<" "<<u->second<<endl;
    u++;
    for(; u != d.end(); u++){
        a = u->first;
        b = u->second;
        //cout<<a<<" "<<b<<endl;
        if(ct <= a)c++,ct=b;
        else ct = min(ct, b);
    }
    cout<<c;
 }
