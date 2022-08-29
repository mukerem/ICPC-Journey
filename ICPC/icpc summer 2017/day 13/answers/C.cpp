#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
long long a=0,b=0,c=0,d=0;
 string x;
while(true){
        int y=0,k=0,z=0;

        getline(cin,x);
                  if(x=="-1")break;
        for( int i=x.length()-1;i>=0;i--)
        {
             if(x[i]=='-')y=-y;
             else if(x[i]!=' '){
                long long m=1;
                for(int n=0;n<k;n++)m*=10;
                y=y+(x[i]-48)*m;
                k++;

            }
                else
                {
                 if(z==0)d=y;
                 else if(z==1)c=y;
                else if(z==2)b=y;
                    y=0;
                    z++;
                    k=0;
                }
                if(i==0)a=y;
        }




      unsigned  long long total=0;
    if(a==b)cout<<0<<endl;
    else if(abs(a)==abs(b))cout<<d<<endl;
    else{
 if(a>=0){
    if(b>=0){
        if(a>b)
            total=d+c*abs((b-(-a)))<2*d+c*abs((b-(a)))?d+c*abs((b-(-a))):2*d+c*abs((b-(a)));
        else total=c*abs((b-(a)));
    }
    else{
        if(a>abs(b))total+=d+c*abs(a-abs(b));
        else total+=d+c*abs((abs(b)-a));
    }
}
   else{
    if(b>=0){
        if(abs(a)>b)
        total=d+c*abs(((-b)-a))<c*abs(((b)-a))?d+c*abs(((-b)-a)):c*abs(((b)-a));
        else
            total=d+c*abs((b)-abs(a))<c*abs((b)-a)?d+c*abs((b)-abs(a)):c*abs((b)-a);
    }
    else{
        if(abs(a)>abs(b))total+=c*abs((b-a));
        else {
           total=2*d+c*abs((b-a))<d+c*abs((abs(b)-a))?2*d+c*abs((b-a)):d+c*abs((abs(b)-a));
        }
    }
   }
   cout<<total<<endl;
}}
}

