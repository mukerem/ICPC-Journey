#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;
int prime(long long number){
if(number%6==1||number%6==5){
    if(number%5!=0){
        for(int i=6;i<=sqrt(number);i+=6 ){
            if(number%(i+1)==0||number%(i-1)==0) return 0;
        }
        return 1;
    }
    return 0;
}
return 0;
}

int main(){
long long num=1000000000;
//cin>>num;
int check=prime(num);
if(check==1)cout<<num<<" is prime"<<endl;
else cout<<num<<" is composite"<<endl;
}
