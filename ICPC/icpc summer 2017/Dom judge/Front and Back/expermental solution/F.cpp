#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
string  a,b;
srand(time(0));
int k=20;
while(k-->0){
        a="";b="";
    int x=rand()%10+1;
    for (int i=0;i<x;i++){
        a+=char(rand()%26+97);
        b+=char(rand()%26+97);
    }
infile<<a<<" "<<b<<endl;
    int m=a.length();

    if(a==b)outfile<<a<<endl;
    else{
    outfile<<a;
       bool  check = false;
        char d=b[0];
        for(int j=0;j<m;j++){
            if(a[j]==d){
              for(int k=j;k<m;k++){
                if(a[k]!=b[k-j]){
                    check=false;
                    break;
              }
              check=true;
               }
              if(check){
                for(int k=m-j;k<m;k++ )outfile<<b[k];
                break;
              }
            }
        }


   if(!check)outfile<<b;
   outfile<<endl;
}
}}
