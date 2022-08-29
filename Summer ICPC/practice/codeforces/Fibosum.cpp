#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1000000007;
int main()
{
    ll n, m, t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>m;
        ll sum = 0, a = 1, b = -1, c;
        for(ll k = 0; k< n; k++){
            c = b;
            b = (b+a)%MOD;
            a = c;
        }
        for(ll k = n; k<= m; k++){
            c = b;
            b = (b+a)%MOD;
            a = c;
            sum = (sum+b)%MOD;
        }
        cout<<-sum<<endl;
    }
}
