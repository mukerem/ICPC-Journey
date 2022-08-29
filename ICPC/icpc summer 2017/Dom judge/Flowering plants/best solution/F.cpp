#include<iostream>
using namespace std;
long long gcfab(long long a  , long long b){
if(b==0)return a;
return gcfab(b,a%b);
}
long long gcfcd(long long a  , long long b){
if(b==0)return a;
return gcfcd(b,a%b);
}
int main(){
long long a,b,c;
while(cin>>a&&a!=-1&&cin>>b>>c){
long long d=a*b/gcfab(a,b);
cout<<c*d/gcfcd(c,d)<<endl;
}
}


