#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int n,h,a,b,y,z,det=0,div,check=0;
cout<<"enter the number of equations and variables respectively\n";
cin>>n>>h;
if(n<h)
cout<<"The number of equations must be greater than or equal to the number of variables\n";
else
{
double A[n][h+1],D[n][h],ans[h+1];
int x[n-2],p[n-2];
cout<<"\nEnter the coefficient of the variables for example X,Y,Z and constant term in order\n";
for(int i=0;i<n;i++)
{
cout<<"Equation ("<<i+1<<")\t\t";
for(int j=0;j<=h;j++)
cin>>A[i][j];
cout<<endl;
}
for(int i=0;i<n;i++)
{
cout<<"Equation ("<<i+1<<")\t";
for(int j=0;j<=h;j++)
{
if(j==h)
cout<<"=";
if(A[i][j]!=1||j==h)
cout<<A[i][j];
if(j<h)
{
cout<<char(87+j);
if(A[i][j+1]>0)
{
if(j<h-1)
cout<<"+";
}
}
}
cout<<endl;
}
for(int s=0;s<=h;s++)
{
for(int f=0;f<n;f++)
{
for(int k=0;k<n;k++)
{
if(k==s)
D[f][k]=A[f][h];
else
D[f][k]=A[f][k];
}}
int r=0;
if(n==1)
ans[s]=D[0][0];
else if(n==2)
ans[s]=D[0][0]*D[1][1]-D[0][1]*D[1][0];
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
}}
for(int i=0;i<n-2;i++)
{
for(int j=i+1;j<n-2;j++)
{
if(p[i]<=p[j])
p[j]--;
}}
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
}}
if(v>0)
{
for(int i=0;i<n-2;i++)
sum=sum*pow(-1,p[i])*D[n-i-3][x[i]];
ans[s]=ans[s]+sum*(D[n-2][a]*D[n-1][b]-D[n-2][b]*D[n-1][a]);
}}}}}}
cout<<ans[n]<<endl;
if(ans[n]!=0)
{
cout<<"\nThe solution set is {";
for(int i=0;i<n;i++)
{
cout<<ans[i]/ans[n];
if(i<h-1)
cout<<",";
}
cout<<"}\n";
}
else
{
for(int i=0;i<h;i++)
{
if(ans[i]==0)
check++;
}
if(check<n)
cout<<"The equation has no solution\n";
else
cout<<"yes";
}
}}
