#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,x, m=-1;
   cin>>n;
   int a[n];
   for(int i = 0; i<n; i++){
    cin>>a[i];
    m = max(m, a[i]);
   }
   int b[m+1] = {0}, j;
   b[1] = 2;
   for(int i = 0; i<n; i++){
      x = a[i];
      b[x]++;
      for(int j=2; j*j<x; j++){
         if(x%j == 0){
            b[j]++;
            b[x/j]++;
         }
      }
      if(j*j == x)b[j]++;
   }
   //for(auto u: b)cout<<u<<" ";cout<<endl;
   long long tot = n*(n-1)/2;
   for(int i=m; i>1; i--){
          if(b[i] > 1){

          }
   }


}
