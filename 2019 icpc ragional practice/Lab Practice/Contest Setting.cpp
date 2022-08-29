#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353
int f[1001][1001];
int n, k, x[1005], v[1005];
map<int, int>m;
ll a,b;
ll contest(int i, int j){
    if (j == 0)return 1;
    else if(i == 0)return 0;

    if (f[i-1][j-1]){
        a = f[i-1][j-1];
    }
    else{
        a = contest(i-1,j-1);
        f[i-1][j-1] = a;
    }

    if (f[i-1][j]){
        b = f[i-1][j];
    }
    else{
        b = contest(i-1,j);
        f[i-1][j] = b;
    }

    return (( a % MOD) * (v[i] % MOD))%MOD;
}
int main(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>x[i];
        m[x[i]]++;
    }
    int c = 0;
    for(auto p: m){
        v[c++] = p.second;
    }
    cout<<contest(n,k);
}
