#include<string>
#include<iostream>
using namespace std;
#define maxx 105
int  main(){
int n,a=0,c=0;
string s;
char l,r,m[200];
cin>>n;
cin>>s;
for(int j=0;j<n;j++)
        m[j]='0';
for(int i=0;i<n;i++){
        bool b=true;
   if(s[i]<=90){
    for(int j=0;j<n;j++)
        m[j]='0';
        a=max(a,c);
                c=0;


   }
   else{
    for(int j=0;j<c;j++){
        if(s[i]==m[j]){
            b=false;
            break;
        }
    }
           if(b) m[c++]=s[i];
   }

}
    a=max(a,c);
    cout<<a;

}

