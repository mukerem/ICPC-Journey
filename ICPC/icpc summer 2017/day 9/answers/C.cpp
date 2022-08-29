#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
double  x,y,z;
string a;
while(true){
        int c=0,k=0,d=0;

        getline(cin,a);
                  if(a=="-1")break;
        for(int i=a.length()-1;i>=0;i--)
        {
             if(a[i]=='-')c=-c;
             else if(a[i]!=' '){

                c=c+(a[i]-48)*pow(10,k++);

            }
                else
                {
                 if(d==0)z=c;
                 else if(d==1)y=c;
                    c=0;
                    d++;
                    k=0;
                }
                if(i==0)x=c;
        }
        double a=sqrt(x*x+y*y+z*z);
double n=180/M_PI*atan2(sqrt(x*x+y*y),z);
if(n<0)n+=180;
double m=180/M_PI*atan2(y,x);
if(m<0)m+=360;

    cout<<fixed<<setprecision(7)<<a<<" "<<n<<" "<<m<< endl;


}
}



