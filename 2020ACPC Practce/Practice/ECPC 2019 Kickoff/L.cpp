#include<bits/stdc++.h>
using namespace std;
long long modulo(long long a, long long b, long long n){
    long long x=1, y=a;
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n; // multiplying with base
        }
        y = (y*y) % n; // squaring the base
        b /= 2;
    }
    return x % n;
}


int main(){
    freopen("exor.in","r",stdin);
    long long c,m,n,q, M = 1000000007;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        m = modulo(2, 2*n + 1, M);
        q = modulo(2, n, M);
        long long ans = (m - q + M) % M;
        cout<<ans<<endl;
    }
}
