#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, r;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++){
        cin>>r;
        a.push_back(r);
    }
    sort(a.begin(), a.end());
    vector<int>v;
    auto x = a.begin();
    auto y = a.end();
    y--;
    for(int i=0; i<n/2; i++){
        v.push_back(*x);
        v.push_back(*y);
        x++;
        y--;
    }
    if(n%2)v.push_back(*x);
    for(int i=n-1; i>=0; i--)cout<<v[i]<<" ";
}
