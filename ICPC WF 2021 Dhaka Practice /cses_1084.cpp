
#include <bits/stdc++.h>
using namespace std;

int main(){
 int n, m, k, x;
 cin>>n>>m>>k;
 vector<int> a;
 multimap<int, int>b;
 for(int i=0; i<n; i++){cin>>x; a.push_back(x);}
 for(int i=0; i<m; i++){cin>>x; b.insert({x, x});}

 //sort(b.begin(), b.end());
 sort(a.begin(), a.end());

 int c = 0;
 for(auto u: a){
  auto r = b.lower_bound(u-k);
   if(r != b.end() && abs(r->first-u)<=k){c++; b.erase(r);}
 }
 cout<<c;

}
