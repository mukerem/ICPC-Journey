#include<iostream>
using namespace std;
int main(){

int n ,sum;
do{
    sum=0;
    cin>>n;
    if(n==-1)break;
    string a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]=="int")sum+=4*b[i];
        else if(a[i]=="bool")sum+=b[i];
        else if(a[i]=="char")sum+=b[i];
        else if(a[i]=="double")sum+=8*b[i];
        else sum+=4*b[i];
}
cout<<sum<<endl;
}while(1);
}
