#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
double a,b;
while(cin>>a&&a!=-1&&cin>>b){
        a=a*(M_PI)/180.0;
    cout<<fixed<<setprecision(5)<<b*cos(a)<<" "<<b*sin(a)<<endl;
}
}

