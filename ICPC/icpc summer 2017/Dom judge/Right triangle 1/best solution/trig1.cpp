#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
long long a,b;
while(cin>>a&&a!=-1&&cin>>b){
    cout<<fixed<<setprecision(5)<<sqrt(b*b-a*a)<<endl;

}
}
