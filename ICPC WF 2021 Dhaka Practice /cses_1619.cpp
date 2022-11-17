#include <bits/stdc++.h>
using namespace std;
int main(){
   int n, a, b;
   cin>>n;
   vector<pair<int, char>> v;
   for(int i=0; i<n; i++){
       cin>>a>>b;
       v.push_back({a, '+'});
       v.push_back({b, '-'});
   }
   sort(v.begin(), v.end());
   int c = 0;
   int d = 0;
   for(auto u: v){
      if(u.second == '+')c++;
      else c--;
      d = max(d, c);
   }
   cout<<d<<endl;
}
