
#include <bits/stdc++.h>
using namespace std;

int main(){
 int n, x, y, b, c=0;
 cin>>n>>x;
 vector<int> p, v;
 map<int, int>m;
 for(int i=0; i<n; i++){cin>>y; p.push_back(y);m[y]++;}
 v = p;
 sort(p.begin(), p.end());
bool z;
 for(int i=0; i<n; i++){
   b = x - p[i];
   z = binary_search(p.begin(), p.end(), b);
   if(z){
     if(p[i] != b){
      for(int k=0; k<n; k++)if(v[k] == p[i]){cout<<k+1<<" ";break;}
      for(int k=0; k<n; k++)if(v[k] == b){cout<<k+1;break;}

     return 0;}
     if(m[b] > 1){
     int zz;
      for(int k=0; k<n; k++)if(v[k] == p[i]){cout<<k+1<<" ";zz=k;break;}
      for(int k=0; k<n; k++)if(v[k] == b && k!= zz){cout<<k+1;break;}
     return 0;}
   }

 }
 cout<<"IMPOSSIBLE";

}
