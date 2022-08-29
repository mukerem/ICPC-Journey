#include<bits/stdc++.h>
using namespace std;
#define N 100000
#define mod 1000000007
typedef long long ll;
bool p[N];
ll inc[N+5], val[N+5];
vector<long long>prime;
void seive()
{
    long long x = sqrt(N);
    p[0]=1;
    p[1]=1;
    for(long long i=2; i<=x; i++)
    {
        if(p[i])continue;
        for(long long j=i+i; j<=N; j+= i)
        {
            p[j]=1;
        }
    }
    for(long long i=2; i<=N; i++)
    {
        if(!p[i])prime.push_back(i);
    }
}

int main()
{
    ll n, c = 1, st;
    seive();
    cin>>n;
    for(auto u: prime){
        c = u/2;
        inc[u] = c;
        for(int i=u+u; i<= n; i*=2){
            inc[i]=c;
            c *= 2;
        }
    }
    //for(int i=1; i<=20;i++)cout<<i<<" "<<inc[i]<<endl;
    prime.erase(prime.begin());
    //cout<<n<<endl;
    for(auto u: prime){
        c = inc[u]+1;
        int i = u+u;
        while(i<= n && inc[i]){i+=u;c++;}
        inc[i] = c;
        //cout<<i<<"*"<<endl;
        for( i*=2; i<= n; i*=2){
            inc[i]=c;
            c *= 2;
        }
    }
    for(int i=1; i<=n;i++)cout<<i<<" "<<inc[i]<<endl;
}
