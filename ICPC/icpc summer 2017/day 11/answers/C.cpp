#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long a;
while(cin>>a&&a!=-1){
       long long b=sqrt(a);
       int total=1;
       for(int i=2;i<=b;i++){
        if(a%i==0)total++;
       }
       total*=2;
       if(b*b==a)total--;
       cout<<total<<endl;
        }

}



