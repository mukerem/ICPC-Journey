// Time: 2019-11-19 16:06:31
// title: Prime Sieve
// language: C++


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 100000005
bitset<N> prime;
void seive()
{
    prime[0] = true;
    prime[1] = true;
    for(int i=2; i<= 10000; i++)
    {
        if(prime[i])continue;
        for(int j = i+i; j<= N; j += i)
        {
            prime[j]=true;
        }
    }

}
int main(){
    seive();
    int n,q, x;
    cin>>n>>q;
    int c = 0;
    for(int i=2;i<=n;i++){
        if(!prime[i])c++;
    }
    cout<<c<<endl;
    while(q--)
    {
        cin>>x;
        if(prime[x])cout<<0<<endl;
        else cout<<1<<endl;
    }
}
