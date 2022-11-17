// Time: 2021-03-31 14:59:28
// title: Goldbach's Conjecture
// language: C++


#include<bits/stdc++.h>
using namespace std;
#define N 32005
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
int main(){
    seive();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<pair<int, int>> v;
        for(auto u: prime){
            if(u>n/2)break;
            if(!p[n-u])v.push_back({u, n-u});
        }
        cout<<n<<" has "<<v.size()<<" representation(s)\n";
        for(auto u: v){
            cout<<u.first<<"+"<<u.second<<endl;
        }
        cout<<endl;
    }

}
