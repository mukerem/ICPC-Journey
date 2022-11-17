
#include <bits/stdc++.h>
using namespace std;

int main(){
 int n,y;
 cin>>n;
 int a[n+1];
 for(int i=0; i<n; i++){
  cin>>y;
  a[y] = i;
 }
 int c = 1;
 for(int i=2; i<=n; i++)if(a[i] < a[i-1])c++;
 cout<<c;

}
