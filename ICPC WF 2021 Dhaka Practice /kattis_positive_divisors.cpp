#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, i=1;
    cin>>n;
    vector<long long> v;
    for(; i*i<n; i++){
        if(n%i == 0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    if(i*i == n)v.push_back(i);
    sort(v.begin(), v.end());
    for(auto u: v)cout<<u<<endl;
}
