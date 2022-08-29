#include<iostream>
#include<algorithm>
using namespace std;
long long a,b,x,y;
int main(){
    cin>>a>>b>>x>>y;
    long long gcd = __gcd(x,y);
    x /= gcd;
    y /= gcd;
    cout<<min(a/x , b/y);

}
