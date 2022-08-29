#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
string  a,b,k;
srand(time(0));
int t=10;
while(t-->0){
a="1";
int x=rand()%10;
for(int i=0;i<x;i++ ){
    int r=rand()%2;
    if (r==0) a+='1';
    else a+='0';
}
infile<<a<<endl;
if(a.length()%3==2)a="0"+a;
       else if(a.length()%3==1)a="00"+a;

       for(unsigned int  i=0;i<a.length()-2;i+=3){
              b="";
              for(int j=0;j<3;j++){
              if(a[i+j]=='0')k="0";
              else k="1";
            b=b+k;
              }
        if(b=="000")outfile<<0;
        else if(b=="001")outfile<<1;
        else if(b=="010")outfile<<2;
        else if(b=="011")outfile<<3;
        else if(b=="100")outfile<<4;
        else if(b=="101")outfile<<5;
        else if(b=="110")outfile<<6;
        else outfile<<7;

       }
       outfile<<endl;
}

}


