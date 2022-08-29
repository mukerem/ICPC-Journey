#include <bits/stdc++.h>
using namespace std;
int a[2][1000010];
int main()
{
int l,n,w,min,least,birr=0,index,list,d;
cin>>n>>l>>w;
a[0][n]=l;
index=n;
d=l;
for(int i=0;i<n;i++)
cin>>a[0][i]>>a[1][i];
while(d>=w)
{
min=a[1][0];
for(int i=0;i<index;i++)
{
if(a[1][i]<=min)
{
min=a[1][i];
least=i;
}
}
if(d-(a[0][index]-a[0][least])>=w)
birr+=(a[0][index]-a[0][least])*min;
else
birr+=(d-w)*min;
d-=a[0][index]-a[0][least];
index=least;
}
cout<<birr;
}
