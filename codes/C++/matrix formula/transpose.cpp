
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
int x[n][m],z[m][n];
cout<<"Enter the value of  "<<n<<" by "<<m<<" matrix"<<endl;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cin>>x[i][j];
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
z[i][j]=(x[j][i]);
}
cout<<"The matrix is\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<"\t"<<x[i][j]<<setw(5);
cout<<endl;
}
cout<<"The transpose of the  matrix is"<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cout<<"\t"<<z[i][j]<<setw(5);
cout<<endl;
}
return 0;
}
