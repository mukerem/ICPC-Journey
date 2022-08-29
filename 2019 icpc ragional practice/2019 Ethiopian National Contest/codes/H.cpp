#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define len(x) x.size()
#define inf 999999999

typedef long long ll;
const int N = 100000;
int i,j,k,x,n,y;

bool perfect(int n){
   if(n<0)return false;
   int s = sqrt(n);
   if (s*s == n)return true;
   return false;
}
int main(){
   cin>>n;
   x = sqrt(n);
   if(perfect(n)){
      cout<<1;
      return 0;
   }
   x = sqrt(n);
   for(i= 1; i<= x; i++){
      y = n - i*i;
      if(perfect(y)){
         cout<<2;
         return 0;
      }
   }

   for(i= 1; i<= x; i++){
      for(j = i; j<= x; j++){
            y = n - i*i - j*j;
            if(y<0)break;
            if(perfect(y)){
               cout<<3;
               return 0;
            }
            }
      
   }
   cout<<4;
    return 0;
}