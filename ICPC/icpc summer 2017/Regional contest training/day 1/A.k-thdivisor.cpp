#include<iostream>
#include<math.h>
#define maxx 100000
using namespace std;
int main(){
long long i,n,k,c[maxx],m=0,t=0;
cin>>n>>k;
for( i=1;i*i<=n;i++){
    if(n%i==0)
    c[m++]=i;
}
i=i-1;
if(i*i==n)t=2*m-1;
else t=2*m;
if(t<k)cout<<-1;
else {
    if(k<=m)cout<<c[k-1];
    else if(i*i==n)cout<<n/c[2*m-k-1];
    else cout<<n/c[2*m-k];
}
}

