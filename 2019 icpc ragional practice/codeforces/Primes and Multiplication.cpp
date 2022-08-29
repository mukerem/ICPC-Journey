#include<bits/stdc++.h>
using namespace std;
set<long long> primes;
long long MOD=1000000007;
long long ans=1;
// A function to print all prime factors of a given number n
void primeFactors(long long n)
{
    // Print the number of 2s that divide n
    if (n%2 == 0)
    {
        //printf("%d %d\n", 2, n);
        primes.insert(2);
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    long long cc = sqrt(n);
    for (long long i = 3; i <= cc; i = i+2)
    {
        // While i divides n, print i and divide n
        if (n%i == 0)
        {
            //printf("%d %d\n", i, n);
            primes.insert(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
}
long long divisor(long long x, long long p){
    if (x < p)return 1;
    long long ans=1;
    for(long long k=p; k<= x; k*= p){
        if(x%k == 0)ans = k;
    }
    return ans%MOD;
}
int main(){
    long long x,n;
    cin>>x>>n;
    primeFactors(x);
    //for(auto a: primes)cout<<a<< " ";
    for(long long i=1; i<=n;i++){
        for(auto v: primes){
            ans = (ans * divisor(i, v)) % MOD;
        }

    }
    cout<<ans;

}
