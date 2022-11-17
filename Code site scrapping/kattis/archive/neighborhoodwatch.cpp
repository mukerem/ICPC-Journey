// Time: 2019-11-17 14:35:26
// title: Neighborhood Watch
// language: C++


#include<bits/stdc++.h>
using namespace std;
vector<int>v;
long long sum=0;
int main(){
    int n,k,x;
    cin>>n>>k;
    for(int i=0; i<k; i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=1; i<=n; i++){
        auto it = lower_bound(v.begin(), v.end(), i);
        if(it == v.end())continue;
        sum += (n+1) - (*it);
    }
    cout<<sum;
}
