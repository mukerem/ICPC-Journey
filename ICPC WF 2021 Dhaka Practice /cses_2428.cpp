#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, k;
   cin>>n>>k;
   int a[n];
   for(int i=0; i<n; i++)cin>>a[i];
   vector<int>v;
   for(int i=0; i<n; i++)
   long long ans = n;
   map<int, int>m;
   int d = 0, l = 0;
   for(int i=0; i<n; i++){
      if(i - l + 1 > k){
         if(m.count(a[i]) == 0 || m[a[i]] < l){
            m[a[i]] = i;
            while(m[a[l]] == l && i - l + 1 > k)l++;
         }
         else{
          m[a[i]] = i;
         }
      }
      else{
       m[a[i]] = i;
      }
      d = i-l+1;
      cout<<l<<" "<<k<<" "<<d<<endl;
      ans += d-1;
   }
  cout<<ans<<endl;
}
