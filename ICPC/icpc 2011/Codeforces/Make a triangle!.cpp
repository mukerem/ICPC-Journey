#include<iostream>
using namespace std;
int a,b,c,d;
int main(){
    cin>>a>>b>>c;
    d = a+b+c;
    int k = max(max(a,b) , c);
    d = d -k;
    if (d>k)cout<<0<<endl;
    else cout<<k-d+1<<endl;
}
