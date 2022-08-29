#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
return b==0?a:gcd(b,a%b);
}
int main(){
int a,b,g;
while(cin>>a&&a!=-1&&cin>>b){
g=gcd(a>b?a:b,a<b?a:b);
cout<<g<<" "<<(long long)((long long )a*b/(long long )g)<<endl;
}
}

