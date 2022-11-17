#include<bits/stdc++.h>
using namespace std;
long long lux(long long n){

    long long s = (long long) (sqrt(n));
    if ((s+1) * (s+1) == n)
        s += 1;
    long long  t = s-1;
    long long u = s+1;
    long long ans = t*3 + 1;

    long long k = u*u - 1;
    if (s*s + s <= n)ans+=1;
    if (k == n)ans+=1;
    return ans;
    }
 int main(){
 long long t,a,b;
 cin>>t;
 while(t--){
  cin>>a>>b;
  cout<<(lux(b) - lux(a-1))<<endl;
 }
 }
