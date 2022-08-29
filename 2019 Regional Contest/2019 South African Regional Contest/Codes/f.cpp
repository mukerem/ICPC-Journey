#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=65540;
bool v[N];
vector<int>primes;
int main()
{
    ll a,b,n, x, k, c,ans;
    for(int i=0; i<N; i++)v[i]=true;
    v[0] = v[1] = 0;
    x = sqrt(N);
    for(int i=2; i<=x; i++)
    {
        if(v[i])
        {
            for(int j=i*2; j<=N; j+=i)
                if(v[j]) v[j] = 0;
        }
    }
    for(int i=2; i<=N; i++)
        if(v[i]) primes.push_back(i);

    while(cin >> a && a!=-1)
    {
        ans = 0;
        cin >> b;
        k = b-a;
        bool s[k+5];
        for(int i=0; i<=k; i++)s[i]=true;
        for(auto u: primes)
        {
            c = ll(ceil((a/double(u)))) * u;
            if(c == u) c += c;
            //cout<<u<<" "<<c<<endl;
            for(ll j=c; j<=b; j+=u)
                if(s[j-a]) s[j-a] = 0;
        }
        for(int i=0; i<=k; i++){
            if(s[i])cout<<a+i<<" ";
        }
        cout<<endl;

    }
}
