#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;

ll power(ll r, ll n, ll m){
    if (n == 0)
        return 1;
    if (n%2 == 0){
        ll v = power(r, n/2, m);
        return ((v % m) * (v % m)) % m;
    }
    else
        return ((power(r, n-1, m) % m) * r) % m;
}
int main(){
    ll t, a, b, c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if (a+b+c == 0)cout<<1<<endl;
        else {
            cout <<power(a, power(b,c, mod-1), mod) << endl;
        }
    }
}
