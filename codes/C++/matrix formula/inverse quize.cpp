#include<iostream>
#include<cmath>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{
do
{
int num,a,b,y,z,det=0,gcf,choice;
cout<<"enter the order of matrix \n";
cin>>num;
int n=num-1;
int adj2[num][num];
double A[num][num],adj[num][num],t[num-1][num-1];
srand(time(NULL));
for(int i=0;i<num;i++)
{
for(int j=0;j<num;j++)
{
A[i][j]=rand()%10;
A[i][j]=A[i][j]*pow(-1,A[i][j]);
}}
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
if(adj[f][s]==0)
adj[f][s]=0;
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
}}
cout<<"\n\nChoice List\n\n";
         cout<<"1)  To play again this game\n";
         cout<<"2)  To EXIT\n";
         cin>>choice;
         switch(choice)
         {
         case 1:
                break;
         case 2: goto end;
         }
 }while(1);
end:
cout<<"Thank you\n";
return 0;
}

