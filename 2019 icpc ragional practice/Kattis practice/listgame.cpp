#include<bits/stdc++.h>
using namespace std;
#define N 31622780
bitset<N> p;
vector<int>prime;
vector<int>v;
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

    for(long long i=3; i<=N; i++)
    {
        if(!p[i])prime.push_back(i);
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n, c;
    seive();
    cin>>n;
    long long  ans = 0;
    c = 0;
    while(n%2==0)n/=2,c++;
    if(c)
        v.push_back(c);
        //ans += int(floor((-1 + (double)sqrt(1 + 8*c))/2.0));

    /*
    for(long long i=3; i<=n&&n!=1; i += 2 )
    {
        if(p[i])continue;
        if(n%i)continue;
        c = 0;
        while(n%i==0)n/=i,c++;
        ans += int(floor((-1 + sqrt(1 + 8*c))/2.0));
    }
    */
    //cout<<prime.size()<<endl;
    for(auto i: prime)
    {
        if(n==1)break;
        c = 0;
        while(n%i==0)n/=i,c++;
        if(c) v.push_back(c);

    }
    if(n!=1)v.push_back(1);
    int tot = 0;
    sort(v.rbegin(), v.rend());
    int res = 0,c, h;
    for(int i=0; i<v.size() ;i++){
        c = v[i];
        h= int(floor((-1 + sqrt(1 + 8*c))/2.0));
        res += c - (h*h + h)/2;
        ans += h;
    }
    cout<<ans;

}
