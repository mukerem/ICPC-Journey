#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;
ll e = 500000004;

int main(){
 ll n, x=1, y=1, k, z;
 ll ans = 0;
 cin>>n;
 ll val = 1;
 y = n;
 x = n+1;
 while (x > 1){
  y = x-1;

  val = n / y;
  x =n/(val+1) + 1;
  k = (y-x) + 1;
  z = (k % mod) * ((y+x) % mod) % mod;
  z = (z * e) % mod;
  ans += (z * val) % mod;
  ans = ans % mod;
 }
 cout<<ans;
 }
