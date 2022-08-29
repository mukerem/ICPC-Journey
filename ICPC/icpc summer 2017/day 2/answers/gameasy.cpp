#include<iostream>
#include<cmath>
using namespace std;
 int main(){
unsigned long int n , max ,m=0;
do{
    max=1;
    cin>>n;
    if(n==-1)break;
   unsigned int a[n];
    for(unsigned int i=0;i<n;i++){
        cin>>a[i];
        max=((long long)max*a[i])%1000000;

    }
    for(unsigned int i=0;i<n;i++){
        unsigned int d=1;
        for(unsigned int j=0;j<n;j++){
           if(j==i)continue;
           else{
                d=((long long)d*a[j])%1000000;
                }
        }
       max=max>d?max:d;

    }
for(unsigned int i=0;i<7;i++){
        if(pow(10,i-1)<=max&&pow(10,i)>max){
        m=i;
        break;
        }
    }
    for(unsigned int i=0;i<6-m;i++)
        cout<<0;
cout<<max<<endl;
}while(1);
}
