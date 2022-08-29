#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j,k,choice;
cout<<"Enter the row \n";
cin>>n;
int r[n][n];
repeat:
again:
int x[n][n],y[n][n],z[n][n],a=0,b=0;
srand(time(NULL));
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
x[i][j]=rand()%10;
x[i][j]=x[i][j]*pow(-1,rand());
}}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
if(x[i][j]==r[i][j])
b++;
}
if(b==n*n)
goto again;
else
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
r[i][j]=x[i][j];
}}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
cout<<"\t"<<x[i][j]<<setw(5);
cout<<endl;
}
cout<<"***********\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
y[i][j]=x[j][i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
z[i][j]=0;
for(k=0;k<n;k++)
z[i][j]=(x[i][k]*y[k][j])+z[i][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
{
if(z[i][j]==0)
a++;
}
else
{
if(z[i][j]==1)
a++;
}}}
if(a<n*n)
goto repeat;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
cout<<"\t"<<x[i][j]<<setw(5);
cout<<endl;
}
}
