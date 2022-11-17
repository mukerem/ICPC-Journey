
#include <bits/stdc++.h>
using namespace std;

int main(){
 int n, x, y, b, c=0;
 cin>>n>>x;
 vector<int> p;
 for(int i=0; i<n; i++){cin>>y; p.push_back(y);}
 sort(p.begin(), p.end());
 int i = 0, j=n-1;
 while(i<=j){
  if(p[i] + p[j] <= x)i++;
  j--;
  c++;
 }
 cout<<c;

}
