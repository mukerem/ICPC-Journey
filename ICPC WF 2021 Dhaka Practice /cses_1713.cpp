#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool p[1005];
vector<ll> sieve(){

 for(int i=2; i*i < 1000; i++){
  if(p[i]) continue;
  for(int j=2*i ; j<= 1000; j+=i)p[j] = true;
 }
 vector<ll>m;
 for(int i=2; i<= 1000; i++)if(!p[i])m.push_back(i);
 return m;
}
int main(){
 ll n, x, y, c, i;
 vector<ll> v = sieve();

 cin >> n;

   while(n--){
    map<int, int> m;
    cin>>x;

     for(auto i: v){
      if(x == 1)break;
      while(x%i == 0) x /= i, m[i]++;
      }
    if (x>1)m[x] = 1;
    ll ans = 1;
    for(auto k: m)ans *= (k.second + 1);
    cout<<ans<<endl;

}}
