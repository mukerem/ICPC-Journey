#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
double  x,y,z;
srand(time(0));
int k=10;
while(k-->0){
        do{
            x=rand()%201-100;
            y=rand()%201-100;
        }while(x==0&&y==0);
z=rand()%201-100;
infile<<x<<" "<<y<<" "<<z<<endl;
double a=sqrt(x*x+y*y+z*z);
double n=180/M_PI*atan2(sqrt(x*x+y*y),z);
if(n<0)n+=180;
double m=180/M_PI*atan2(y,x);
if(m<0)m+=360;

    outfile<<fixed<<setprecision(7)<<a<<" "<<n<<" "<<m<< endl;


}
}



