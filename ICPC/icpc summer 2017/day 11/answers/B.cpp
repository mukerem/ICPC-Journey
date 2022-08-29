
#include<iostream>
using namespace std;
int main(){
string  a,b,k;
while(cin>>a&&a!="-1"){
        if(a.length()%3==2)a="0"+a;
       else if(a.length()%3==1)a="00"+a;

       for(unsigned int  i=0;i<a.length()-2;i+=3){
              b="";
              for(int j=0;j<3;j++){
              if(a[i+j]=='0')k="0";
              else k="1";
            b=b+k;
              }
        if(b=="000")cout<<0;
        else if(b=="001")cout<<1;
        else if(b=="010")cout<<2;
        else if(b=="011")cout<<3;
        else if(b=="100")cout<<4;
        else if(b=="101")cout<<5;
        else if(b=="110")cout<<6;
        else cout<<7;

       }
       cout<<endl;
}

}


