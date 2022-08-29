#include<iostream>
#include<cmath>
using namespace std;
int main(){
long int n ,num,k ,sum ,p,ans;
int r ,m=0;
int binary[63];
do{
    sum=1;
    k=0;
 cin>>r;
 if(r==-1)break;
 cin>>n;
 if(r==1)ans=n*r;
 else{
 num=n;
for(int i=0;i<63;i++)
{
if(num%2==1){
p=pow(2,i);
binary[k++]=p%1000000000;
p=pow(r,binary[k-1]);
sum=(sum*p)%1000000000;
}
num=num/2;
if(num==0)break;
}
 ans=((sum-1)/r-1)%1000000000;
 }
    for(int i=0;i<10;i++){
        if(pow(10,i-1)<=ans&&pow(10,i)>ans){
        m=i;
        break;
        }
    }
    for(int i=0;i<9-m;i++)
        cout<<0;
    cout<<ans<<endl;
}while(1);

}
