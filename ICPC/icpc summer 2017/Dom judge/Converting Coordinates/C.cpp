#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
double  x,y,z;
while(cin>>x>>y>>z){
        int c=0,k=0,d=0;
	
        double a=sqrt(x*x+y*y+z*z);
double n=180/M_PI*atan2(sqrt(x*x+y*y),z);
if(n<0)n+=180;
double m=180/M_PI*atan2(y,x);
if(m<0)m+=360;

    cout<<fixed<<setprecision(7)<<a<<" "<<n<<" "<<m<< endl;


}
}



