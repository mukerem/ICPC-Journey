// Time: 2018-10-13 17:17:33
// title: Das Blinkenlights
// language: C++


#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long long p,q,s;
cin>>p>>q>>s;
string str = (p*q/__gcd(p,q)<=s)?"yes":"no";
cout<<str<<endl;
}
