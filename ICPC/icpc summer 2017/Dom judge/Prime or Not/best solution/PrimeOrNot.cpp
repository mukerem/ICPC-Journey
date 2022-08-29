#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long  a;
while(cin>>a&&a!=-1){
        bool b=true;
for(long long  i=2;i<=sqrt(a);i++){
    if(a%i==0){
        cout<<a<<" is COMPOSITE TT"<<endl;
        b=false;
         break;
    }
}
if(b)cout<<a<<" is PRIME!!"<<endl;
}
}

