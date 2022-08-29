#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
double a,b;
while(cin>>a&&a!=-1&&cin>>b){
    cout<<fixed<<setprecision(5)<<180*acos(a/b)/3.1415926535<<endl;
}
}


