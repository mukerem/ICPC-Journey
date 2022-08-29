#include<iostream>
#include<cmath>
using namespace std;
int main(){
int l,w,a,b,max,min,x,y,z,h,m;
do{
cin>>l;
if(l==-1)break;
cin>>w;
if(l%3==0||w%3==0)cout<<0<<endl;
else if(l%2==0||w%2==0){
    if(l>w){
        if(l%2==0)cout<<l/2<<endl;
        else cout<<w/2<<endl;

    }
    else{
        if(w%2==0)cout<<w/2<<endl;
        else cout<<l/2<<endl;
    }
}
else{
        max=l>w?l:w;
        min=l<w?l:w;
        a=max/2;
        b=a+1;
    long long list=pow(2,63)-1;
    for(int k=1;k<=min;k++){
        x=a*k;
        y=b*k;
        z=max*(min-k);
        h=x>y?x:y;
        h=h>z?h:z;
         m=x<y?x:y;
        m=m<z?m:z;
        list=list<h-m?list:h-m;
    }
    cout<<list<<endl;
}
}while(1);
}
