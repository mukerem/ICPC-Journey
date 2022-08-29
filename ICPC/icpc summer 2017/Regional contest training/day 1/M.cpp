#include<iostream>
using namespace std;
#define m 105
int main(){
long long  a,b[m],d=0,x;
bool c=true;
cin>>a;
cin>>b[0];
for (long long i=1;i<a;i++){
    cin>>b[i];
    x=b[i]-b[i-1];
    if(i==1) d=x;
    else if(c){
        if(d==x)continue;
        else c=false;
    }
}
if(c)cout<<b[a-1]+x;
else cout<<b[a-1];
}
