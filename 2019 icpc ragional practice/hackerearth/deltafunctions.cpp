
#include<bits/stdc++.h>
using namespace std;
#define N 100005
#define mod 1000000007
typedef long long ll;
ll x[N];
 ll ss[N+5];
int main(){

        ll n,ans, g,q=150;
        n = q;
          for(ll i=1;i<=n;i++){
            ans = 0;
            for(ll j=1;j<i;j++){
                g = __gcd(i,j);
                ans += (i*j)/(g*g);
                ans = ans%mod;
            }
            ans *= 2;
            ans += 1;
            x[i]=(x[i-1] + ans)%mod;
            cout<<i<<" "<<ans<<endl;
        }
        while(q--){
                n = q;
        //cin>>n;

        /*
        for(int i=1;i<=n;i++){
            cout<<i<<" "<<x[i]<<endl;
        }*/
        //cout<<x[n]<<endl;
        int b = 0;
        for(int i=1;i<=n;i++){
                //cout<<i<<" => ";
            int a = 0;
            for(int j=i; j<=n; j++){
                for(int k = j; k<=n;k++){
                    if(i == __gcd(j,k))//cout<<"("<<j<<","<<k<<") ",
                        a+= j*k;
                        a%=mod;
                }
            }
            ss[n/i] = a/(i*i)%mod;
            //cout<<ss[n/i]<<" ";
            //cout<<a<<" "<<a/(i*i)<<endl;

            b += a/(i*i)%mod;
        }
        b *= 2;
        b -= n;
        //cout<<b<<endl;

        }
        ans = 0;
        for(int i=1;i<=150;i++){
            ll cc = ss[i] - ss[i-1];
            cout<<i<<" "<<cc<<" "<<cc/(i*i)<<endl;
            //cout<<ss[i]<<endl;
            //cout<<x[i]<<endl;
        }
}
