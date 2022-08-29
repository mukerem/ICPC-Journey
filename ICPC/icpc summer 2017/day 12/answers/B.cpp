#include<iostream>
using namespace std;
int main(){
long long a,b,c;
while(cin>>a&&a!=-1&&cin>>b>>c){
long long t=a+b;
int k=t-c;
if(t==c)cout<<0<<endl;
else if(b>=k/3&&a/2>=k/3)cout<<k/3<<endl;
else cout<<(b<a/2?b:a/2)<<endl;
}}
