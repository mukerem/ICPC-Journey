#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k = n%3;
    if(k != 2)cout<<"1 1 "<<n-2<<endl;
    else cout<<"1 2 "<<n-3<<endl;
}
