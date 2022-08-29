#include<iostream>
using namespace std;
int main(){
string  a,b;
while(cin>>a&&a!="-1"&&cin>>b){
    int m=a.length();

    if(a==b)cout<<a<<endl;
    else{
    cout<<a;
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
                for(int k=m-j;k<m;k++ )cout<<b[k];
                break;
              }
            }
        }


   if(!check)cout<<b;
   cout<<endl;
}
}}
