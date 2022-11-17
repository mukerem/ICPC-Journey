#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    map<int, vector<int>>m;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]].push_back(i);
    }
    int ans = n;
    for(auto u: m){
        auto x = u.second;
        for(int i=1; i<x.size(); i++)ans = min(ans, x[i]-x[i-1]);
    }
    cout<<ans;

}
