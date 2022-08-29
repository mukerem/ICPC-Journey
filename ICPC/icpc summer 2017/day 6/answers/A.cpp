#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int a,b,c,d;
double f (double x) {
return a * x + b * sin(x) + c * cos(x);
}
void search(double p,double n){
double m=(p+n)/2.0;
if(abs(f(m)-d)*1000<1.0)
    cout<<fixed<<setprecision(3)<<int(1000*m)/1000.0<<endl;
else if(f(m)<d)return search(m,n);
else return search(p,m);
}
int main(){
while(cin>>a&&a!=-1&&cin>>b>>c>>d){
    double max,min;
    min=(d-b-c)/double(a);
    max=(d+b+c)/double(a);
search(min,max);
}
}
