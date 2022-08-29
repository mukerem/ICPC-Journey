#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
  string a;
double a1=0,b1=0,a2=0,b2=0,a3=0,b3=0;
srand(time(0));
int k=10;
while(k-->0){
do{
a1=float(rand()%20001)-10000;
a2=float(rand()%20001)-10000;
a3=float(rand()%20001)-10000;
}while(a1==0&&a2==0&&a3==0);

do{
b1=float(rand()%20001)-10000;
b2=float(rand()%20001)-10000;
b3=float(rand()%20001)-10000;
}while(b1==0&&b2==0&&b3==0);

infile<<a1<<" "<<a2<<" "<<a3<<" "<<b1<<" "<<b2<<" "<<b3<<" "<<endl;

        int c=0,k=0,d=0;


        if(a1/b1==a2/b2&&a1/b1==a3/b3){
                if(a1/b1>0)outfile<<0<<" ";
                else outfile<<180<<" ";
                outfile<<0<<endl;

        }else{
          double d1=sqrt(a1*a1+a2*a2+a3*a3);
          double d2=sqrt(b1*b1+b2*b2+b3*b3);
          double t=acos((a1*b1+a2*b2+a3*b3)/(d1*d2));
          outfile<<fixed<<setprecision(6)<<180.0/M_PI*t<<" "<<d1*d2*sin(t)/2.0<<endl;
}

}}
