#include <bits/stdc++.h>
using namespace std;
class maths
{
private:
int a,b,d,h,i,j,k,l,m,n,y,z;
int num,div,gcf;
int det=0,r=0,e=0,g=0,ran=0;
public:
    void addition();
    void adjoint();
    void determinant();
    void inverse();
    void multiplication();
    void rank();
    void echelon_row_reduced();
    void skew();
    void solution();
    void subtraction();
    void symmetric();
    void transpose();
};
void maths::addition()
{
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
}}
void maths::adjoint()
{
cout<<"enter the order of matrix \n";
cin>>num;
int n=num-1;
double A[num][num],adj[num][num],t[num-1][num-1];
cout<<"Enter the element of "<<num<<" by "<<num<<" matrix\n";
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
cin>>A[i][j];
}
for(int s=0;s<num;s++)
{
for(int f=0;f<num;f++)
{
int v=-1,r=0;
for(int k=0;k<num;k++)
{
if(k!=s)
{
v++;
int u=-1;
for(int l=0;l<num;l++)
{
if(l!=f)
{
u++;
t[v][u]=A[k][l];
}}}}
if(n==1)
adj[f][s]=pow(-1,f+s)*t[0][0];
else if(n==2)
adj[f][s]=pow(-1,f+s)*(t[0][0]*t[1][1]-t[0][1]*t[1][0]);
else
{
int x[n-2],p[n-2];
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
int c=0,h=0;
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
h++;
}}
if(h>0)
{
for(int i=0;i<n-2;i++)
sum=sum*pow(-1,p[i])*t[n-i-3][x[i]];
adj[f][s]=pow(-1,f+s)*sum*(t[n-2][a]*t[n-1][b]-t[n-2][b]*t[n-1][a]);
}}}}}}}
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
cout<<"\t"<<A[i][j]<<setw(5);
cout<<endl;
}
cout<<"\nThe adjoint is\n";
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
cout<<"\t"<<adj[i][j]<<"\t";
cout<<endl;
}
}
void maths::determinant()
{
cout<<"enter the order of matrix \n";
cin>>n;
int A[n][n],x[n-2],p[n-2],det=0;
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
void maths::inverse()
{
cout<<"enter the order of matrix \n";
cin>>num;
int n=num-1;
int adj2[num][num];
double A[num][num],adj[num][num],t[num-1][num-1];
cout<<"Enter the element of "<<num<<" by "<<num<<" matrix\n";
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
cin>>A[i][j];
}
for(int s=0;s<num;s++)
{
for(int f=0;f<num;f++)
{
int v=-1,r=0;
for(int k=0;k<num;k++)
{
if(k!=s)
{
v++;
int u=-1;
for(int l=0;l<num;l++)
{
if(l!=f)
{
u++;
t[v][u]=A[k][l];
}}}}
if(n==1)
adj[f][s]=pow(-1,f+s)*t[0][0];
else if(n==2)
adj[f][s]=pow(-1,f+s)*(t[0][0]*t[1][1]-t[0][1]*t[1][0]);
else
{
int x[n-2],p[n-2];
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
int c=0,h=0;
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
h++;
}}
if(h>0)
{
for(int i=0;i<n-2;i++)
sum=sum*pow(-1,p[i])*t[n-i-3][x[i]];
adj[f][s]=pow(-1,f+s)*sum*(t[n-2][a]*t[n-1][b]-t[n-2][b]*t[n-1][a]);
}}}}}}}
for(int i=0;i<num;i++)
det=det+A[0][i]*adj[i][0];
cout<<"The determinant of\n";
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
cout<<"\t"<<A[i][j]<<setw(5);
cout<<endl;
}
cout<<"is "<<det;
cout<<"\nThe adjoint is\n";
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
{
adj2[i][j]=adj[i][j];
cout<<"\t"<<adj[i][j]<<"\t";
}
cout<<endl;
}
if(det==0)
cout<<"The matrix has no inverse\n";
else
{
cout<<"\nThe inverse is\n";
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
cout<<"\t"<<adj[i][j]/det<<"\t";
cout<<endl;
}
cout<<"\n\nOR\n";
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
{
if(adj2[i][j]%det==0)
cout<<"\t"<<adj[i][j]/det<<"\t";
else
{
for(int k=abs(det);k>=1;k--)
{
if(adj2[i][j]%k==0&&det%k==0)
{
gcf=k;
break;
}
}
if(adj2[i][j]<0&&det<0)
cout<<"\t"<<abs(adj2[i][j])/gcf<<"/"<<abs(det)/gcf<<"\t";
else if(adj2[i][j]>0&&det<0)
cout<<"\t"<<-adj2[i][j]/gcf<<"/"<<abs(det)/gcf<<"\t";
else
cout<<"\t"<<adj2[i][j]/gcf<<"/"<<det/gcf<<"\t";
}}
cout<<endl;
}}}
void maths::multiplication()
{
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
}}
void maths::rank()
{
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
void maths::echelon_row_reduced()
{
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
cout<<"The matrix has no row reduced echelon form";
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
cout<<"The row echelon form of  the matrix is\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
cout<<"\t"<<A[i][j]<<"\t";
cout<<endl;
}
for(int i=1;i<n;i++)
{
int p=0;
for(int j=m-1;j>=0;j--)
{
if(A[i][j]==1)
{
p=j;
if(p>0)
for(int u=0;u<i;u++)
{
if(A[u][p]!=0)
{
k=-A[u][p]/A[i][p];
for(int v=0;v<m;v++)
{
A[u][v]+=k*A[i][v];
}}}}}}
cout<<"\nThe row reduced echelon form of the matrix\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
cout<<"\t"<<A[i][j]<<"\t";
cout<<endl;
}
}
}
void maths::skew()
{
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
z[i][j]=(x[i][j]-x[j][i])/2;
}
cout<<"The skew matrix of\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<"\t"<<x[i][j]<<setw(5);
cout<<endl;
}
cout<<"\nis"<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cout<<"\t"<<z[i][j]<<setw(5);
cout<<endl;
}
}
void maths::solution()
{
cout<<"enter the number of equations and variables respectively\n";
cin>>n>>h;
if(n<h)
cout<<"The number of equations must be greater than or equal to the number of variables\n";
else
{
double A[n][h+1],D[n][h],ans[h+1];
int x[n-2],p[n-2],check=0,ans2[h+1];
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
if(ans[h]!=0)
{
cout<<"\nThe solution set is {";
for(int i=0;i<h;i++)
{
cout<<ans[i]/ans[h];
if(i<h-1)
cout<<",";
}
cout<<"}\tOR\t{";
ans2[h]=ans[h];
for(int i=0;i<h;i++)
{
ans2[i]=ans[i];
if(ans2[i]%ans2[h]==0)
cout<<ans2[i]/ans2[h];
else
{
for(int k=abs(ans2[h]);k>=1;k--)
{
if(ans2[i]%k==0&&ans2[h]%k==0)
{
gcf=k;
break;
}
}
if(ans2[i]<0&&ans2[h]<0)
cout<<abs(ans2[i])/gcf<<"/"<<abs(ans2[h])/gcf;
else if(ans2[i]>0&&ans2[h]<0)
cout<<-ans2[i]/gcf<<"/"<<abs(ans2[h])/gcf;
else
cout<<ans2[i]/gcf<<"/"<<ans2[h]/gcf;
}
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
cout<<"The equation has many solution\n";
}}}
void maths::subtraction()
{
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
z[i][j]=(x[i][j]-y[i][j]);
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
}}
void maths::symmetric()
{
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
z[i][j]=(x[i][j]+x[j][i])/2;
}
cout<<"The symmetric matrix of\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<"\t"<<x[i][j]<<setw(5);
cout<<endl;
}
cout<<"\nis"<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cout<<"\t"<<z[i][j]<<setw(5);
cout<<endl;
}}
void maths::transpose()
{
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
}}
void introductory()
{
cout<<"press ENTER";
cin.get();
}
int  main()
{
 introductory();
maths formula;
int choice;
do
{
cout<<"\n\n\nChoice List\n\n";
cout<<"To calculate the matrix\n\n";
cout<<"\t\t1)  addition\t\t\t\t\8)skew\n";
cout<<"\t\t2)  adjoint\t\t\t\t9)solution\n";
cout<<"\t\t3)  determinant\t\t\t\t10)subtraction\n";
cout<<"\t\t4)  inverse\t\t\t\t11)symmetric\n";
cout<<"\t\t5)  multiplication\t\t\t12)transpose\n";
cout<<"\t\t6)  rank\t\t\t\t13)To EXIT\n";
cout<<"\t\t7)  echelon row reduced\n";
cin>>choice;
         switch(choice)
         {
         case 1:formula.addition();
                break;
         case 2:formula.adjoint();
                break;
         case 3:formula.determinant();
                break;
         case 4:formula.inverse();
                break;
         case 5:formula.multiplication();
                break;
         case 6:formula.rank();
                break;
         case 7:formula.echelon_row_reduced();
                break;
         case 8:formula.skew();
                break;
         case 9:formula.solution();
                break;
         case 10:formula.subtraction();
                break;
         case 11:formula.symmetric();
                break;
         case 12:formula.transpose();
                break;
         case 13: goto end;
         }
 }while(1);
end:
return 0;
}

