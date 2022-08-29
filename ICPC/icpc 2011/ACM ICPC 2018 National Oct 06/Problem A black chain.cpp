#include<iostream>
using namespace std;
int main(){
long long n;
cin>>n;
int x=0;
long long min=n;
while(min > x+1){
    min = min/2 -1;
    x++;
}
cout<<x;
}
