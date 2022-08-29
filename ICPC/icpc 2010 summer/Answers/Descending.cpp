
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,x;
cin>>x;
for (int m=0;m<x;m++){
cin>>a;
  int b[a];
  for(int i=0;i<a;i++)cin>>b[i];
  sort(b,b+a);
  for(int i=a-1;i>=0;i--)cout<<b[i]<<" ";
  cout<<endl;

}
}


