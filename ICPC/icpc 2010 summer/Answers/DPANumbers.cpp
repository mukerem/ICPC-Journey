

#include<bits/stdc++.h>
using namespace std;
int main(){
int a,x;
cin>>x;
for (int m=0;m<x;m++){
cin>>a;
int sum=0;
  for(int i=1;i<a;i++){
    if (a%i==0)sum+=i;
  }
  if (sum<a) cout<<"deficient"<<endl;
  else if(sum==a) cout <<"perfect"<<endl;
  else cout<<"abundant"<<endl;

}
}


