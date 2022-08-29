#include <iostream>
#include <fstream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
int n,m,l,i,j;
cout<<"Enter the row and column of the matrices matrix\n";
cin>>n>>m;
int x[n][m],y[n][m],z[n][m];
cout<<"Enter the value of the first "<<n<<" by "<<m<<" matrix"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cin>>x[i][j];
}
cout<<"Enter the value of the second  "<<n<<" by "<<m<<" matrix"<<endl;
for (i=0;i<n;i++)
{
for(j=0;j<m;j++)
cin>>y[i][j];
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
z[i][j]=(x[i][j]+y[i][j]);
}
cout<<"The first matrix is\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<"\t"<<x[i][j]<<setw(5);
cout<<endl;
}
cout<<"\n\nThe second matrix is\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<"\t"<<y[i][j]<<setw(5);
cout<<endl;
}
cout<<"the addition of two matrices is"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<"\t"<<z[i][j]<<setw(5);
cout<<endl;
}
return 0;
}
