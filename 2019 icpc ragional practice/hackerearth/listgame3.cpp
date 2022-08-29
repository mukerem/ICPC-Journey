#include<bits/stdc++.h>
using namespace std;
#define N 31622780
bitset<N> p;
vector<int>prime;
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
    long long ans,n;
    seive();
    cin>>n;
    map<long long,long long>m;
    while (n!=1)
{
    bool ch = false;
    for(auto u:prime)
        {
            if(n%u == 0)
            {
                if(m.count(u) == 0)m[u]=1;
                else m[u]+= 1;
                n = n/u;
                ch = true;
                break;
            }
        }
        if(!ch)
        {
            m[n]=1;
            n = 1;
        }
    }
    ans = 0;
for(auto u:m)
{
    int c = u.second;
    ans += int(floor((-1 + sqrt(1 + 8*c))/2.0));
    }
    cout<<ans<<endl;


}
