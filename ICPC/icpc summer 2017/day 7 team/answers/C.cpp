#include<iostream>
#include<cmath>
using namespace std;
long long a,b,c;
int check(long long num){
for(int i=0;i<=18;i++)
if(pow(10,i-1)<=num&&pow(10,i)>num)
return i;
}
int main(){
while(cin>>a&&a!=-1&&cin>>b>>c){
    int k=check(c)/2+1;
    long long m=pow(10,k);
    a=a%m;
    b=b%m;
    cout<<((a%c*b%c)%c)<<endl;
}
}
