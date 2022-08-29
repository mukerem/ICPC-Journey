#include<iostream>
#include<cmath>
#include<vector>
#define maxx 100000
using namespace std;
int main(){
long long x,k,i,j,n,t=0,temp,last=0;
vector<long long >c,d,e;
cin>>n>>k;
for( i=0;i<n;i++){
    cin>>x;
    c.push_back(x);
    cin>>x;
    d.push_back(x);
    cin>>x;
    e.push_back(x);
}
for (int j=0;j<n;j++)
{
for (int i=n-1;i>=1;i--)
{

if(d[i]<d[i-1])
{
temp=d[i];
d[i]=d[i-1];
d[i-1]=temp;
temp=c[i];
c[i]=d[i-1];
c[i-1]=temp;
temp=e[i];
e[i]=e[i-1];
e[i-1]=temp;
}
}
}

for( i=0;i<n-1;i++){
    for( j=i+1;j<n;j++){
    if(last<c[j])continue;
    if(min(d[i],d[j])>=abs(c[i]-c[j])){
        if(abs(e[i]-e[j])<=k){
            t++;
        }
    }
    else{
        last=max(c[j],last);
    }
}
}
cout<<t;
}


