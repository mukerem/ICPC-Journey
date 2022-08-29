#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
  string a;
  cout<<pow(10,3)<<endl;
double a1=0,b1=0,a2=0,b2=0,a3=0,b3=0;
while(true){
        int c=0,k=0,d=0;

        getline(cin,a);
        cout<<a.length()<<endl  ;
                  if(a=="-1")break;
        for(int i=a.length()-2;i>=0;i--)
        {
             if(a[i]=='-')c=-c;
             else if(a[i]!=' '){
                int p=(a[i]-48)*(pow(10,k));

                 k++;
                c=c+p;
            }
                else
                {
                 if(d==0)b3=c;
                 else if(d==1)b2=c;
                else if(d==2)b1=c;
                 else if(d==3)a3=c;
                 else if(d==4)a2=c;
                    c=0;
                    d++;
                    k=0;
                }
                if(i==0)a1=c;
        }
    cout<<a1<<" "<<a2<<" "<<a3<<" "<<b1<<" "<<b2<<" "<<b3<<" "<<endl;
        if(a1/b1==a2/b2&&a1/b1==a3/b3){
                if(a1/b1>0)cout<<0<<" ";
                else cout<<180<<" ";
                cout<<0<<endl;

        }else{
          double d1=sqrt(a1*a1+a2*a2+a3*a3);
          double d2=sqrt(b1*b1+b2*b2+b3*b3);
          double t=acos((a1*b1+a2*b2+a3*b3)/(d1*d2));

          cout<<fixed<<setprecision(6)<<180.0/M_PI*t<<" "<<d1*d2*sin(t)/2.0<<endl;
}

}}
