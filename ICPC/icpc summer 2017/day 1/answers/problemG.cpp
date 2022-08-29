#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double const pi=M_PI;//3.14159
int main(){
unsigned int n,r;
do{
cin>>n;
if(n==-1)break;
cin>>r;
int t=0, a[n];
long double area=pi*r*r;
for(int i=0;i<n;i++){
    cin>>a[i];
    t+=a[i];
}
for(int i=0;i<n;i++)
cout<<fixed<<setprecision(3)<<int(1000*(a[i]*area/t))/1000.0<<" ";
cout<<endl;
}while(1);
}
