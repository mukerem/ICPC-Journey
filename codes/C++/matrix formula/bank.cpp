#include <iostream>
#include <fstream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
double A,p,r,t,n;
cout<<"What do you want find \n";
cout<<"1)Deposit\n2Initial deposit\n3)Rate\n4)Time\n";
cin>>n;
if(n==1)
{
cout<<"Enter p,r,t respectively\n";
cin>>p>>r>>t;
cout<<"The total deposit is "<<pow(1+(r/100),t)*p;
}
else if(n==2)
{
cout<<"Enter A,r,t respectively\n";
cin>>A>>r>>t;
cout<<"The initial deposit "<<A/pow(1+(r/100),t);
}
else if(n==3)
{
cout<<"Enter A,p,t respectively\n";
cin>>A>>p>>t;
cout<<"The Rate is "<<pow(10,log(A/p)/t-1);
}
else
{
cout<<"Enter A,p,r respectively\n";
cin>>A>>p>>r;
cout<<"The total deposit is "<<log(A/p)/log(1+r/100);
}}
