#include<bits/stdc++.h>
using namespace std;
int prime[100005];
vector<int> v;
void seive(){
    prime[0] = prime[1] = 1;
    for(int i=2; i*i<= 100000; i++){
        if(prime[i])continue;
        for(int j=i; j<= 100000; j += i)
            prime[j] = i;
    }
}

long long totient(int n){
    map<int, int>m;
    for(int i=2; i*i<= n; i++){
        while(n%i == 0){
            m[i]++;
            n /= i;
        }

    }
    if(n != 1)m[n]++;
    long long tot = 1;
    for(auto u: m){
        tot *= pow(u.first, u.second - 1)*(u.first - 1);
    }
    return tot;
}
long long totient_seive(int m){
    map<int, int> p;
    int s;
    while(m > 1){
        s = prime[m];
        p[s]++;
        m /= s;
    }
    long long tot = 1;
    for(auto u: p){
        tot *= pow(u.first, u.second - 1)*(u.first - 1);
    }
    return tot;
}
long long powerMod(int x, int n, int m){
    long long result = 1;
    while(n){
        if(n&1) result = (result * x)%m;
        x = (x*x) % m;

        n /= 2;
    }
    return result;
}
long long modInverse(int x, int m){
    long long tot = totient(m);
    long long inv = powerMod(x, tot - 1, m);
    return inv;
}
int main(){
    seive();
    int n;
    //cout<<powerMod(2, 16, 1000000);
    cin>>n;
    while(n--){
        long long a,b, modinv;
        cin>>a>>b;
        modinv = modInverse(b, a);
        if(__gcd(a, b) != 1 || modinv >1e9) cout<<"IMPOSSIBLE\n";
        else cout<<modinv<<"\n";
    }
}

