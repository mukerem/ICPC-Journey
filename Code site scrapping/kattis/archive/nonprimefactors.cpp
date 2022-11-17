// Time: 2019-11-19 19:57:22
// title: Non-Prime Factors
// language: C++


#include<bits/stdc++.h>
using namespace std;
#define N 2000005
int prime[N];
void seive()
{
    int x = sqrt(N);
    prime[0]=1;
    prime[1]=1;
    for(int i=2; i<=x; i++)
    {
        if(prime[i])continue;
        for(int j=i; j<N; j+= i)
        {
            prime[j]=i;
        }
    }
    for(int i=2; i<N; i++){
        if(!prime[i])prime[i]=i;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,u;
    seive();
    cin>>q;

    //for(int i=0;i<100;i++)cout<<prime[i]<<" ";
    while(q--)
    {
        cin>>n;
        map<int,int>m;
        while (n!=1)
        {
            u = prime[n];
            if(m.count(u) == 0)m[u]=1;
            else m[u]+= 1;
            n = n/u;
            //cout<<n<<endl;
        }
        int ans = 1, c=0;
        for(auto u:m){
            ans = ans*(u.second + 1);
            c++;
        }
        cout<<ans-c<<"\n";

    }
}
