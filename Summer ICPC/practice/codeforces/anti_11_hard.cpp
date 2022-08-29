#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll fact[10005];
const int MOD = 1000000007;
int main(){
    ll t, n, c, ans;
    fact[0] = 1;
    for(int i = 1; i<= 10000; i++ )
        fact[i] = (fact[i-1] < 1)% MOD;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n&1) cout<<(fact[(n-1)/2] + fact[(n+1)/2])%MOD<<endl;
        else cout<<(fact[n/2] + fact[n/2 - 1])%MOD<<endl;
    }

}
