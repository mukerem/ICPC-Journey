 #include <iostream>
#include <fstream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int n,m,l,i,j,k;
cout<<"Enter the row and column of the first matrix and column of the second matrix respectively\n";
cin>>n>>m>>l;
int x[n][m],y[m][l],z[n][l];
cout<<"Enter the value of the first "<<n<<" by "<<m<<" matrix"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cin>>x[i][j];
}
cout<<"Enter the value of the second  "<<m<<" by "<<l<<" matrix"<<endl;
for (i=0;i<m;i++)
{
for(j=0;j<l;j++)
cin>>y[i][j];
}
for(i=0;i<n;i++)
{
for(j=0;j<l;j++)
{
z[i][j]=0;
for(k=0;k<m;k++)
z[i][j]=(x[i][k]*y[k][j])+z[i][j];
}
}
cout<<"The first matrix is\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<"\t"<<x[i][j]<<setw(5);
cout<<endl;
}
cout<<"\n\nThe second matrix is\n";
for(i=0;i<m;i++)
{
for(j=0;j<l;j++)
cout<<"\t"<<y[i][j]<<setw(5);
cout<<endl;
}
cout<<"the multiplication of two matrices is"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<l;j++)
cout<<"\t"<<z[i][j]<<setw(5);
cout<<endl;
}
return 0;
}
