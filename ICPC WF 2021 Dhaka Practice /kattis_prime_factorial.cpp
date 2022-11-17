#include<bits/stdc++.h>
using namespace std;

long long common(long long m, long long x){
    long long c = 0, q = x;
    while(q <= m){
        c += m / q;
        q *= x;
    }
    return c;

}
int main(){
    long long n,m, x, y, c, q, d;
    cin>>n>>m;
    long long k = 99999999999999;
    d = 0;
    while(n%2 == 0){
        d++;
        n /= 2;
    }
    if(d){
        c = common(m, 2);
        k = min(k, c/ d );
    }
    for(long long i=3; i*i <= n; i += 2){
        d = 0;
        while(n%i == 0){
            d++;
            n /= i;
        }
        if(d){
            c = common(m, i);
            k = min(k, c/ d );
        }
    }
    if(n>1){
        c = common(m, n);
        k = min(k, c);
    }

    cout<<k;

}
