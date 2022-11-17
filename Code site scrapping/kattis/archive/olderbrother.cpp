// Time: 2019-11-20 22:36:56
// title: Older Brother
// language: C++


#include<bits/stdc++.h>
using namespace std;
#define N 46341
bool p[N];
vector<long long>prime;
bool isprime(int n)
{
    if(n<2)return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
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
    cin>>n;
    if(n==1)
    {
        cout<<"no";
        return 0;
    }
    long long nn=n;
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

    for(auto u:m)
    {
        ans = __gcd(ans, u.second);
    }
    //cout<<ans<<endl;
    if(ans == 1)
    {
        if(isprime(nn))cout<<"yes";
        else cout<<"no";
        return 0;
    }
    long long s;
    for(int i=2;i*i<=nn;i++){
        if(powl(i,ans) == nn){
            s = i;
            break;
        }
    }
    //long long s = (long long)((double)log(nn)/(double)log(ans));

    if(isprime(s))cout<<"yes";
    else cout<<"no";
    //cout<<ans<<" "<<s<<endl;


}
