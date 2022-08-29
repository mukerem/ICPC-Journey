#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define len(x) x.size()
#define inf 999999999

typedef long long ll;
const int MOD = 16769023;
long long n,ans,x;
long long power(int n){
   if(n == 0)return 1;
   if(n %2 == 0){
      long long u = power(n/2);
      return ((u%MOD) * (u%MOD))%MOD;
   }
   else{
      return (2 * power(n-1))%MOD;
   }
}
int main(){
   cin>>n;
   x = int(ceil(n/2.0));
   cout<<power(x)%MOD;
    return 0;
}