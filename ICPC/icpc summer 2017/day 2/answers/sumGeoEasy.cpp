#include<iostream>
#include<cmath>
using namespace std;
int main(){
unsigned long int n,r,x ,sum,m=0;
do{
        sum=0;
 cin>>r;
 if(r==-1)break;
 cin>>n;
 x=r;
for(unsigned long long i=1;i<=n;i++){
    sum=(sum+x)%1000000000;
    x=((unsigned long long)x*r)%1000000000;
}
    for(unsigned int i=0;i<10;i++){
        if(pow(10,i-1)<=sum&&pow(10,i)>sum){
        m=i;
        break;
        }
    }
    for(unsigned int i=0;i<9-m;i++)
        cout<<0;
    cout<<sum<<endl;
}while(1);

}
