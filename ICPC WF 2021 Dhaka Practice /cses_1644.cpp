#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 ll n,y, c, b, l=0;
 cin>>n>>c>>b;
 ll a[n];
 for(int i=0; i<n; i++){
  cin>>a[i];
 }

    ll maxx = LONG_MIN, m = 0;

    for (int i = 0; i < n; i++)
    {
        m = m + a[i];
        l++;
        if(l > b){
            m -= a[i-b];
            l--;
        }
        if (maxx < m && c <= l)
            maxx = m;

        if (m < 0){
            m = 0;
            l = 0;
        }
        //cout<<m<<endl;
    }
    cout<<maxx;
}
