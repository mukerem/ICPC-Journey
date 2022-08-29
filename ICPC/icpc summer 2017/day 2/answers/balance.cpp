#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int m=1000000000;
int balance(long long r, unsigned long long n){
    if(n==0)return 1%m;
    else if(n%2==0){
        return ((long long) balance(r,n/2)*balance(r,n/2))%m;
    }
    else if(n%2==1)
                return ((((long long) balance(r,(n-1)/2)*balance(r,(n-1)/2))%m)*(long long )r)%m;

}
int main(){
long long b,r;
unsigned long long n,ans;
do{
 cin>>b;
 if(b==-1)break;
 cin>>r>>n;

     ans=((long long)balance(r,n)*b)%1000000000;

    cout<<setfill('0')<<setw(9)<<ans<<endl;
}while(1);

}
