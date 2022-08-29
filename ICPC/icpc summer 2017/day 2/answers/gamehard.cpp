#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n ,sum , max ,m;
do{
    max=1;
    cin>>n;
    if(n==-1)break;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        max=((long long)max*a[i])%1000000;

    }
    for(int i=0;i<n;i++){
        int d=1;
        for(int j=0;j<n;j++){
           if(j==i)continue;
           else{
                d=((long long)d*a[j])%1000000;
                }
        }
       max=max>d?max:d;

    }
for(int i=0;i<7;i++){
        if(pow(10,i-1)<=max&&pow(10,i)>max){
        m=i;
        break;
        }
    }
    for(int i=0;i<6-m;i++)
        cout<<0;
cout<<max<<endl;
}while(1);
}
