#include<iostream>
#include<math.h>
using namespace std;
int main(){
float n;
cin>>n;
int a=ceil(sqrt(n));
if(a*(a-1)>=n)cout<<4*a-2;
else cout<<4*a;
}
