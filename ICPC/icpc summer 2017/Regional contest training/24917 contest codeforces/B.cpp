#include<iostream>
#include<string>
using namespace std;
#define maxx 100000
int main(){
long long n,p,q,r;
long long m[maxx],a[maxx],b[maxx],c[maxx],i1,i2,i3;
long long x=LONG_LONG_MIN , y=LONG_LONG_MIN ,z=LONG_LONG_MIN;
cin>>n>>p>>q>>r;
for(int i=0;i<n;i++){
    cin>>m[i];
    a[i]=m[i]*p;
    b[i]=m[i]*q;
    c[i]=m[i]*r;
    i1=(x<a[i]?i:i1);
    x=max(x,a[i]);
    i2=(y<b[i]?i:i2);
    y=max(y,b[i]);
    i3=(z<=c[i]?i:i3);
    z=max(z,a[i]);

}
if(i1<=i2&&i2<=i3)cout<<x+y+z;

}
