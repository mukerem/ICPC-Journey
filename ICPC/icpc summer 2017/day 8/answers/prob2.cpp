#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double f(double x){
return exp(-x*x/2.0)/(sqrt(2*3.1415926535));
}

int main(){
double a,b,n=1000;
while(cin>>a&&a!=-1&&cin>>b){
    if(a>b){
        cout<<"0.000"<<endl;

    }
    else{
    double h=(b-a)/n;
    double ans=f(a);
    double k=a+h;
for(int i=1;i<n;i++){
    if(i%2==1)ans+=4*f(k);
    else ans+=2*f(k);
    k+=h;
}
    ans+=f(k);
    ans=h/3.0*ans;
cout<<fixed<<setprecision(3)<<ans<<endl;
}}
}

