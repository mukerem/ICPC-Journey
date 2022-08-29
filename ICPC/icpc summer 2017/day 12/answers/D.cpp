#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long long a;
while(cin>>a&&a!=-1){

long long c=3*a,b[3*a];
for(int i=0;i<c;i++)cin>>b[i];
sort(b,b+c);
long long t=0;
for(int i=c-2;i>=a;i-=2)t+=b[i];
cout<<t<<endl;
}}

