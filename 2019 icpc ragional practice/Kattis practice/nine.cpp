#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod  = 1e9 + 7;
ll powermod(ll n){
    if(n == 0)return 1;
    if(n%2 == 0){
        ll x = powermod(n/2);
        return (x*x)%mod;
    }
    else{
        return (9 * powermod(n-1))%mod;
    }
}
int main(){
  ll t,n, ans, xx;
  cin>>t;
  while(t--){
    cin>>n;
    xx = powermod(n-1);
    cout<<( 8 * xx)%mod<<endl;
  }

}

