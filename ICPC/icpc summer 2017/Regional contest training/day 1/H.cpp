#include<iostream>
using namespace std;
#define m 100000
int main(){
long long  a,b[m],maxx=0,index=-1,left,sum=0;
cin>>a;
for (long long i=0;i<a;i++){
    cin>>b[i];
    index=(maxx<b[i]?i:index);
    maxx=max(maxx,b[i]);
}
left=b[0];
for (long long i=1;i<index;i++){
    if(b[i]<=left){
        sum+=left+1-b[i];
        b[i]=left+1;
        left+=1;
    }
}
left=b[a-1];
for (long long i=a-2;i>=index;i--){
    if(b[i]<=left){
        sum+=left+1-b[i];
        b[i]=left+1;
        left+=1;
    }
}
for (long long i=0;i<a;i++)
    cout<<b[i]<<" ";
cout<<sum;
}
