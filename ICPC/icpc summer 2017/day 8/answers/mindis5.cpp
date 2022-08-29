#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double distance(double x1,double y1,double z1,double x2,double y2,double z2){
return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
}

int main(){
double x0,y0,z0,x1,y1,z1,x2,y2,z2,a,b,c,e;
while(cin>>x0&&x0!=-1&&cin>>y0>>z0>>x1>>y1>>z1>>x2>>y2>>z2){
        double min,min1.min2;
            if(x2>=x0&&x1<=x0||x1>=x0&&x2<=x0||y2>=y0&&y1<=y0||y1>=y0&&y2<=y0||z2>=z0&&z1<=z0||z1>=z0&&z2<=z0){
            a=x2-x1;
            b=y2-y1;
            c=z2-z1;
            min=sqrt(pow(((y1-y0)*c-(z1-z0)*b),2)+pow(((x1-x0)*c-(z1-z0)*a),2)+pow(((y1-y0)*a-(x1-x0)*b),2))/sqrt(a*a+b*b+c*c);
                }
                else{
                double min1=distance(x0,y0,z0,x1,y1,z1);
                double min2=distance(x0,y0,z0,x2,y2,z2);
                min=min1<min2?min1:min2;
                }
        cout<<fixed<<setprecision(4)<<min<<endl;

}}



