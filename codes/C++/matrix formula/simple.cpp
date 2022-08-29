#include<iostream>
using namespace std;
int main()
{
int a,b,s,n,fact=1,m,sum=0;
cout<<"Enter two number\n";
cin>>a>>b;
s=a+b;
cout<<"The summation of "<<a<<" and "<<b<<" is "<<s<<endl;
cout<<"Enter a number\n";
cin>>n;
if(n%2==0)
cout<<n<<" is even\n";
else
cout<<n<<" is odd\n";
cout<<"Enter a number\n";
cin>>m;
for(int i=m;i>=1;i--)
{
fact=fact*i;
sum+=i;
}
cout<<"The factorial of "<<m<<" is "<<fact;
cout<<"\nThe summation of "<<m<<" is "<<sum;
}
