#include<iostream>
#include<cmath>
using namespace std;

int main(){
long long a,b;
while(cin>>a&&a!=-1&&cin>>b){

if(a>b||b%a!=0)cout<<"IMPOSSIBLE"<<endl;
else cout<<a<<" "<<a+b<<endl;

}}
