
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 ll n,y;
 cin>>n;
 ll a[n];
 for(int i=0; i<n; i++){
  cin>>a[i];
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
