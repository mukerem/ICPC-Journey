#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, p, d, h;
    double length;
    while(cin>>p&& p!= -1){
        cin>>d>>h;
        b = d;
        a = p -h;
        length = (sqrt(b*b + 16.0*a*a)/2.0) + b*b * (double)log((4.0 * a + sqrt(b*b + 16.0*a*a))/ b)/(8.0 * a);
        cout<<setprecision(3)<<fixed<<length<<endl;
    }
}
