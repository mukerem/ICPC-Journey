
#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
if(y==0)return x;
else return gcd(y,x%y);
}

int main(){
int a,b;
while(cin>>a&&a!=-1&&cin>>b){
  cout<<gcd(max(a,b),min(a,b))<<endl;

}

}


