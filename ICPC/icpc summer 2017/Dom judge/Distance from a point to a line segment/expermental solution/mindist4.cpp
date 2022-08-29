#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

double d;
void distance(double x1,double y1,double x2,double y2){
d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main(){
double x0,y0,x1,y1,x2,y2,a,b,c;
srand(time(0));
int k=10;
while(k-->0){
x0=float(rand()%11);
y0=float(rand()%11);

do{
x1=float(rand()%11);
y1=float(rand()%11);
}while(x0==x1&&y0==y1);

do{
x2=float(rand()%11);
y2=float(rand()%11);
}while(x2==x1&&y2==y1 || x2==x0&&y2==y0);
infile<<x0<<" "<<y0<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<endl;
  double m;
       distance(x1,y1,x2,y2);

   if(y2==y1) {
        c=-x1;
        a=1;
        b=0;
}
    else {
        m=(x1-x2)/(y2-y1);
        c=x1*m-y1;
            b=1;
            a=-m;
    }

     int k=d>abs(a*x0+y0*b+c)/sqrt(a*a+b*b)?1:0;
      if(y2==y1) {
        c=-x2;
        a=1;
        b=0;
}
    else {
        m=(x1-x2)/(y2-y1);
        c=x2*m-y2;
            b=1;
            a=-m;
    }
     int  k2=d>abs(a*x0+y0*b+c)/sqrt(a*a+b*b)?1:0;
    if(k==1&&k2==1){
       if(x1==y2) {
        c=-x1;
        a=1;
        b=0;
}
    else {
        m=(y2-y1)/(x2-x1);
        c=x1*m-y1;
            b=1;
            a=-m;
    }
    outfile<<fixed<<setprecision(4)<<abs(a*x0+y0*b+c)/sqrt(a*a+b*b)<<endl;
    }
    else{
            double min=sqrt((x2-x0)*(x2-x0)+(y2-y0)*(y2-y0))<sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1))?sqrt((x2-x0)*(x2-x0)+(y2-y0)*(y2-y0)):sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1));
        outfile<<fixed<<setprecision(4)<<min<<endl;

}}
}

