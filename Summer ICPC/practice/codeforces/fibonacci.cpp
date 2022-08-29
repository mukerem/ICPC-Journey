#include<iostream>
using namespace std;
#define ll long long int
#define mp pair<pair<ll, ll>, pair<ll, ll>>
#define f first
#define s second
mp matrix = {{0,1},{1,1}};
mp multi(mp x, mp y, int mod)
{
    ll a,b,c,d,e,f,g,h,i,j,k,l;
    a = x.f.f;
    b = x.f.s;
    c = x.s.f;
    d = x.s.s;
    e = y.f.f;
    f = y.f.s;
    g = y.s.f;
    h = y.s.s;
    i = ((a * e) % mod + (b *g) % mod) % mod;
    j = ((a * f) % mod + (b *h) % mod) % mod;
    k = ((c * e) % mod + (d *g) % mod) % mod;
    l = ((c * f) % mod + (d *h) % mod) % mod;
    //cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl<<endl;
    //cout<<e<<" "<<f<<endl<<g<<" "<<h<<endl<<endl;
    //cout<<i<<" "<<j<<endl<<k<<" "<<l<<endl<<endl;
    return mp{{i,j},{k,l}};
}

mp fibonacci(mp x, ll n, int mod)
{
    if (n == 0) return matrix;
    else if(n %2)
    {
        mp y = fibonacci(x, n/2, mod);
        return multi(y, y, mod);
    }
    else
    {
        return multi(fibonacci(x, n-1, mod), matrix, mod);

    }
}
int main()
{
    ll t, n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n){
        mp a = fibonacci(matrix, n-1, 1000000007);
        //cout<<a.f.f<<" "<<a.f.s<<" "<<a.s.f<<" "<<a.s.s<<endl;
        cout<<a.f.s<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}
