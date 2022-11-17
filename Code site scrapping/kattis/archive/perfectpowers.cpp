// Time: 2019-11-19 19:15:31
// title: Perfect Pth Powers
// language: C++


#include<bits/stdc++.h>
using namespace std;
#define N 46341
bool p[N];
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
    long long n;
    seive();
    //for(int i=0;i<100;i++)cout<<prime[i]<<" ";
    while(cin>>n &&n)
    {
        long long nn=n;
        long long neg = n<0?-1:1;
        n = n*neg;
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
        long long ans =m.begin()->second;

        for(auto u:m){
            ans = __gcd(ans, u.second);
        }
        if(neg == -1){
            while(ans%2==0){
                ans /= 2;
            }
        }
        cout<<ans<<endl;

    }
}
