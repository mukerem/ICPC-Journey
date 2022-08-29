#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
long long a;
while(cin>>a&&a!=-1){
        long long total;
    if(a==4||a==7)total=1;
    else if(a<7)total=-1;
else if(a%7==0)total=a/7;
else if(a%7==1){
        if(a<8)total=-1;
      else total=a/7+1;
}
else if(a%7==2){
        if(a<16)total=-1;
  else total=a/7+2;
}
else if(a%7==3)
{if(a<24)total=-1;
else total=a/7+3;
}
else if(a%7==4){
    if(a<11)total=-1;
    else total=a/7+1;
        }
else if(a%7==5){
        if(a<12)total=-1;
else  total=a/7+2;
}
else {
        if(a<20)total=-1;
else
    total=a/7+3;
}
cout<<total<<endl;
}

}

