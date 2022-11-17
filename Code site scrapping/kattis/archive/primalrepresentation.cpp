// Time: 2019-12-05 10:52:11
// title: Primal Representation
// language: C++


#include<bits/stdc++.h>
using namespace std;
#define N 46345
bool all_primes[N/3];

vector<long long>prime;

void new_seive(){
    all_primes[0]=true;
    int last = N/3;
    int p=5, i=1, step=3, start=8;
    int s = sqrt(N);
    while (p<=s){
        for(int k=start; k<last; k += 2*p)
            all_primes[k]=true;
        for(int k=start + step; k<last; k += 2*p)
            all_primes[k]=true;
        i++;
        while(all_primes[i])i++;
        p = i%2? 3*i+2: 3*i+1;
        start = 1 + (i/2 * 10) + (i%2? 7: 0);
        step = 2*i + 1;

    }
    prime.push_back(2);
    prime.push_back(3);
    for(int i=1; i<last; i++)
    {
        if(!all_primes[i])
            prime.push_back(i%2?3*i+2:3*i+1);

    }
}
int main()
{
    long long n;
    new_seive();
    //for(int i=0;i<100;i++)cout<<prime[i]<<" ";
    while(cin>>n)
    {
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
        if(neg==-1)cout<<-1<<" ";
        for(auto u:m){
            if(u.second == 1)cout<<u.first<<" ";
            else cout<<u.first<<"^"<<u.second<<" ";
        }
        cout<<endl;

    }
}
