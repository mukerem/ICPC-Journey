#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;
ll power(ll r, ll n, ll mod){
    if (n == 0)
        return 1;
    if (n%2 == 0){
        ll v = power(r, n/2, mod);
        return v*v % mod;
    }
    else
        return ((power(r, n-1, mod) % mod) * r) % mod;
}

int main(){
    ll n,x,y,b=1, c=1,d1=1, d2=1, d3=1,num=1, sq = 1, d=1, e1, e2;
    cin>>n;
    while(n--){
        cin>>x>>y;
        b *= (y+1);
        b %= mod;
        num *= power(x, y, mod);
        num %= mod;
        if(sq != -1){
            if(y%2 == 0){
                sq *= power(x, y/2, mod);
                sq %= mod;
            }
            else sq = -1;
        }
        d1 *= (power(x, y+1, mod) - 1);
        d1 %= mod;
        d2 *= (x-1);
        d2 %= mod;
    }
    d3 = power(d2, mod-2, mod);
    d = (d1 * d3)%mod;
    e1 = 500000004;

    if(sq == -1){
        e2 = (b*e1)%mod;
        c = power(num, e2, mod);
    }
    else{
        c = power(sq, b, mod);
        //e2 = ((b-1) * e1) % mod;
        //c = power(num, e2, mod);
        //c = (c * sq)%mod;
    }
    cout<<b<<" "<<d<<" "<<c;
}
