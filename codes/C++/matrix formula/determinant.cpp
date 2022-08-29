#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int n,a,b,y,z,det=0,r=0;
cout<<"enter the order of matrix \n";
cin>>n;
int A[n][n],x[n-2],p[n-2];
cout<<"Enter the element of "<<n<<" by "<<n<<" matrix\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cin>>A[i][j];
}
if(n==1)
cout<<"The determinant of "<<A[0][0]<<" is "<<A[0][0];
else if(n==2)
{
cout<<"The determinant of\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cout<<"\t"<<A[i][j]<<setw(5);
cout<<endl;
}
cout<<"is "<<A[0][0]*A[1][1]-A[0][1]*A[1][0]<<"\n\n\n";
}
else
{
z=pow(n,n-2);
while(z>r)
{
for(int i=0;i<n-2;i++)
{
y=r/pow(n,i);
x[i]=y%n;
p[i]=x[i];
}
r++;
int m=0,d=0,sum=1;
for(int i=0;i<n-2;i++)
{
for(int j=i+1;j<n-2;j++)
{
if(x[i]==x[j])
m++;
}
}
for(int i=0;i<n-2;i++)
{
for(int j=i+1;j<n-2;j++)
{
if(p[i]<=p[j])
p[j]--;
}
}
if(m==0)
{
for(int l=0;l<n;l++)
{
int c=0,v=0;
for(int k=0;k<n-2;k++)
{
if(l==x[k])
c++;
}
if(c==0)
{
if(d==0)
{
a=l;
d++;
}
else
{
b=l;
v++;
}
}
if(v>0)
{
for(int i=0;i<n-2;i++)
sum=sum*pow(-1,p[i])*A[n-i-3][x[i]];
det=det+sum*(A[n-2][a]*A[n-1][b]-A[n-2][b]*A[n-1][a]);
}
}
}
}
cout<<"The determinant of\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cout<<"\t"<<A[i][j]<<setw(5);
cout<<endl;
}
cout<<"\t\tis "<<det;
}
}
