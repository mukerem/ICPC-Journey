#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
double a,b;
while(cin>>a&&a!=-1&&cin>>b){
    cout<<fixed<<setprecision(6)<<a/exp(b*a)<<" "<<1-1.0/exp(b*a)<<endl;

}
}

