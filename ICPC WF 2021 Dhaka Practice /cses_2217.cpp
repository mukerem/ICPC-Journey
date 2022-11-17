#include <bits/stdc++.h>
using namespace std;

int main(){
 int n, y, x, m, z, w;
 vector<int> v;
 cin>>n>>m;
 int a[n+1];
 v.push_back(0);
 for(int i=1; i<=n; i++){
  cin>>y;
  a[y] = i;
  v.push_back(y);
 }
 int c = 1;
 for(int i=2; i<=n; i++)if(a[i] < a[i-1])c++;
 int s,t, x1, x2, y1, y2;
 //cout<<c<<endl<<endl;
 for(int i=0; i<m; i++){
     cin>>s>>t;
     if(s>t)swap(s,t);
     x = v[s];
     y = v[t];
     x1 = x-1;
     x2 = x+1;
     y1 = y-1;
     y2 = y+1;
     if(abs(x-y) == 1){
       if(x>y){
           c--;
           if(x2 <= n && s < a[x2] && a[x2] < t)c++;
           if(y1 > 0 && s < a[y1] && a[y1] < t)c++;
       }
       else{
           c++;
           if(x1 > 0 && s < a[x1] && a[x1] < t)c--;
           if(y2 <= n && s < a[y2] && a[y2] < t)c--;
       }
     }

     else{
      if(x1 > 0 && s < a[x1] && a[x1] < t)c--;
      if(x2 <= n && s < a[x2] && a[x2] < t)c++;
      if(y1 > 0 && s < a[y1] && a[y1] < t)c++;
      if(y2 <= n && s < a[y2] && a[y2] < t)c--;
     }
     cout<<c<<endl;
     swap(v[s], v[t]);
     a[x] = t;
     a[y] = s;
}
}
