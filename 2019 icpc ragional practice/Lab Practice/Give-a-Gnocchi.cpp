#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define vi vector<long long>
#define vlong long vector<long long>
#define vvi vector < vi >
#define pii pair<long long,long long>
#define plong long pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define along long(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
bool prime[1009];
vector<int> v;
void sieve(int n)
{


    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        {

            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
        if (prime[p])
            v.eb(p) ;
}
bool isPrime(int n)
{

    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;

    return true;
}

int main()
{

    int n,k;
    cin>>n>>k;
    sieve(n);
    int c = 0;
    int x = n-1;
    vector<int> vv;
    while(c < k)
    {
        x++;
        if (!isPrime(x) && x!=1)
        {
            for(auto i : v)
            {
                if( x % i == 0)
                {
                    goto N;
                }
            }
            c++;
            vv.eb(x);
        }
        N:
            continue;
    }
    cout<< x ;




}
