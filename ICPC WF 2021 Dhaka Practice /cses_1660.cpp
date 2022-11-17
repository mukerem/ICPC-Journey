#include<bits/stdc++.h>
using namespace std;
int main(){
 long long n, x, a;
 vector<long long>v;
 cin>>n>>x;
 for(int i=0; i<n; i++){
  cin>>a;
  v.push_back(a);
 }
 long long ans = 0, tot=0;
 int l=0;
 bool c;
 for(int i = 0; i<n; i++){
  tot += v[i];
  if(tot == x)ans++;
  c = false;
  while(tot - v[l] >= x){tot-=v[l];l++;c=true;}
  if(c && tot == x)ans++;
 }
 cout<<ans;
}
