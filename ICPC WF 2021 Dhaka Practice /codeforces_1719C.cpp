#include <bits/stdc++.h>
using namespace std;
int main(){
   long long t;
   cin>>t;
   while(t--){
       long long n,q;
       cin>>n>>q;
       vector<long long>a(n), b(n, 0);
       long long maxx = -1, id = -1;
       for(long long i=0; i<n; i++){
            cin>>a[i];
            if(maxx < a[i]){maxx=a[i];id=i;}
       }
       long long m = a[0], idx=0;
       for(long long i=1; i<=id; i++){
           if(m < a[i]){
               m = a[i];
               idx = i;
           }
           b[idx]++;
       }
       long long x, k, y;
       for(long long i=0; i<q; i++){
          cin>>x>>k;
          if(a[x-1] == n){
              long long ans = max(0LL, k-x+2);
              if(x == 1)ans = max(0LL, ans-1);
              cout<<ans<<endl;
              continue;
          }
          k = min(k, n-1);
          y = b[x-1];
          long long ans = max(0LL, k-x+2);
          if(x == 1)ans = max(0LL, ans-1);
          cout<<min(ans, y)<<endl;
       }


   }
}
