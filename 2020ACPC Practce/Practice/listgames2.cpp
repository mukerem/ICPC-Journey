#include<bits/stdc++.h>
using namespace std;
#define N 31622780
bitset<N> p;
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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    seive();
    cin>>n;
    map<long long,long long>m,  reserve;
    set<long long>s;
        while (n!=1)
        {
            bool ch = false;
            for(auto u:prime)
            {
                if(n%u == 0)
                {
                    m[u]+= 1;
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
        long long ans = 0, c=0, a,k;
        for(auto u:m){
            c = u.second;
            a= int(floor((-1 + (double)sqrt(1 + 8*c))/2.0));
            k = (c - a * (a + 1)/2);
            if(k)reserve[u.first] = k;
            ans += a;
            for(int i=1; i<=a; i++){
                s.insert((long long)(pow(u.first, i)));
            }
        }

    cout<<ans<< " "<<s.size()<<endl;
    for(auto u:s )cout<<u<<" ";cout<<endl;
    for(auto u: m)cout<<u.first<<" "<<u.second<<endl;
    for(auto u: reserve)cout<<u.first<<" "<<u.second<<endl;

}
