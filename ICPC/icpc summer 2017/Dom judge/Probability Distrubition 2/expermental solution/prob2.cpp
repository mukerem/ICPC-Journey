#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

double f(double x){
return exp(-x*x/2.0)/(sqrt(2*3.1415926535));
}

int main(){

double a,b,n=1000;
srand(time(0));
int k=10;
while(k-->0){
        do{
            a=-4+(float(rand()))/(RAND_MAX/8.0);
            }while(a==-1);
b=-4+(float(rand()))/(RAND_MAX/8.0);
infile<<a<<" "<<b<<endl;
    if(a>b){
        outfile<<"0.000"<<endl;

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
    outfile<<fixed<<setprecision(3)<<ans<<endl;
}
}
}

