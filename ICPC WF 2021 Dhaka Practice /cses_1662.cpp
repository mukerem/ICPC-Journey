#include<bits/stdc++.h>
using namespace std;
int main(){
 long long n, a, t=0, r;
 map<long long, long long>m;
 cin>>n;
 for(int i=0; i<n; i++){
  cin>>a;
  t += a;
  r = (t%n + n)%n;
  m[r]++;
 }
 m[0]++;
 long long ans = 0;
 for(auto u: m){
  ans += (u.second) * (u.second - 1)/2;
 }
 cout<<ans;
}
