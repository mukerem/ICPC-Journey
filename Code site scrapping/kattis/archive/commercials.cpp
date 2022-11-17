// Time: 2022-08-18 09:54:13
// title: Radio Commercials
// language: C++


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 ll n,y, k;
 cin>>n>>k;
 ll a[n];
 for(int i=0; i<n; i++){
  cin>>a[i];
  a[i] -= k;
 }
 
    ll maxx = INT_MIN, m = 0;
 
    for (int i = 0; i < n; i++)
    {
        m = m + a[i];
        if (maxx < m)
            maxx = m;
 
        if (m < 0)
            m = 0;
    }
    cout<<maxx;
}