#include <bits/stdc++.h>
using namespace std;

int main(){
 int n, a,b,c=0, cur=0, last=-1;
 vector<int> v;
 map<int, int>m;
 cin>>n;
 for(int i=1; i<=n; i++){
  cin>>a;
   b = m[a];
   if(b > last){
       cur = i-b;

       last = b;
   }
   else cur++;
   c = max(c, cur);
   m[a] = i;
 }
 cout<<c;
 }

