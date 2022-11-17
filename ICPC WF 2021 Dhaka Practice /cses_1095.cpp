#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;

ll power(ll r, ll n){
    if (n == 0)
        return 1;
    if (n%2 == 0){
        ll v = power(r, n/2);
        return v*v % mod;
    }
    else
        return ((power(r, n-1) % mod) * r) % mod;
}
int main(){
    ll t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if (a+b == 0)cout<<1<<endl;
        else {
            cout <<power(a,b) << endl;
        }
    }
}
