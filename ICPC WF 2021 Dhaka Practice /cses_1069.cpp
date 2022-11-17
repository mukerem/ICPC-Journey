#include<bits/stdc++.h>
using namespace std;
int main(){
 int ans = 1, r=1;
 string s;
 cin>>s;
 int c = s.length();
 for(int i=0; i<c-1; i++){
  if(s[i] == s[i+1])
  r++;

 else{
 ans = max(ans, r);
 r = 1;
 }
}
ans = max(ans, r);
cout<<ans;
}
