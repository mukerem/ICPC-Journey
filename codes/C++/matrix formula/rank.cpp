#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int n,m,d,e=0,r=0,g=0,b,ran=0;
cout<<"enter the row and column of the matrix respectively\n";
cin>>n>>m;
double  A[n][m],a[m],k;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
cin>>A[i][j];
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
cout<<"\t"<<A[i][j]<<"\t";
cout<<endl;
}
for(int i=0;i<n;i++)
{
if(A[i][0]==0)
e++;
}
if(e==n)
cout<<"The matrix has no row echelon form so it has no rank";
else
{
if(A[0][0]!=1)
{
for(int i=1;i<n;i++)
{
if(A[i][0]==1)
{
g++;
for(int j=0;j<m;j++)
{
a[j]=A[0][j];
A[0][j]=A[i][j];
A[i][j]=a[j];
}}}
if(g==0&&A[0][0]==0)
{
for(int i=1;i<n;i++)
{
if(A[i][0]!=0)
{
for(int j=0;j<m;j++)
{
a[j]=A[i][j];
A[i][j]=A[0][j];
A[0][j]=a[j];
}
break;
}}}
if(g==0)
{
for(int i=m-1;i>=0;i--)
A[0][i]=A[0][i]/A[0][0];
}}
for(int v=1;v<n;v++)
{
int c=0,z=0,f=0;
for(int u=0;u<m;u++)
{
if(A[v-1][u]!=0)
break;
else
c++;
}
for(int j=0;j<m;j++)
{
if(A[v][j]!=0)
{
b=j;
break;
}}
for(int w=b;w<=c;w++)
{
if(A[v][w]!=0)
{
k=-A[v][w];
for(int j=b;j<m;j++)
A[v][j]=A[v][j]+k*A[w][j];
}}
for(int j=0;j<m;j++)
{
if(A[v][j]!=0)
{
d=j;
z++;
break;
}}
if(z>0)
{
for(int h=m-1;h>=d;h--)
A[v][h]=A[v][h]/A[v][d];
}
int q=0;
for(int j=0;j<m;j++)
{
if(A[v][j]==0)
q++;
else
break;
}
if(q>v)
{
int min=q,index=v;
for(int i=v;i<n;i++)
{
int s=0;
for(int j=0;j<m;j++)
{
if(A[i][j]==0)
s++;
else
break;
}
if(min>s)
{
min=s;
index=i;
}}
if(index>v)
{
for(int h=0;h<m;h++)
{
a[h]=A[v][h];
A[v][h]=A[index][h];
A[index][h]=a[h];
}
v--;
}}
int y=0;
for(int j=0;j<m;j++)
{
if(A[v][j]==0)
y++;
}
if(y==m)
{
for(int h=0;h<m;h++)
{
a[h]=A[n-1][h];
A[n-1][h]=A[v][h];
A[v][h]=a[h];
}}}
for(int i=0;i<n;i++)
{
int check=0;
for(int j=0;j<m;j++)
{
if(A[i][j]!=0)
check++;
}
if(check>0)
ran++;
}
cout<<"The row echelon form of  the matrix is\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
cout<<"\t"<<A[i][j]<<"\t";
cout<<endl;
}
cout<<"\nThe rank of the matrix is "<<ran;
}}
