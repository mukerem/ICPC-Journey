#include <math.h>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
double a,b,c,d,te=0.0001;
double f(double x) {
return a*x+b*sin(x)+c*cos(x) ;
}
void chacke(double l,double r)
{
    double x=(l+r)/2;
    double m =f(x);
    if(abs(d-m)<te){
      int z =x*1000;
      cout<<fixed<<setprecision(3)<<(double)z/1000<<endl;
      return;
    }
    else if(m > d)return chacke(l,x);
    else return chacke(x,r);
}
int main()
{
  while (1) {
      cin >> a;
      if (a == -1)break;
      cin >> b>>c>>d;
      chacke(0,102);
    }
}
