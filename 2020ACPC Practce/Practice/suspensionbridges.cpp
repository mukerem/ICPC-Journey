#include<bits/stdc++.h>
using namespace std;
int d, s;
double catena(double a){
    double x = d/(2*a);
    double ans = a*(pow(M_E, x) + pow(M_E, -x))/2.0 - a - s;
    return ans;
}
int main(){

    double a = -10, b = 10, m;
    double length, y;
    cin>>d>>s;
    while(b-a > 1e-5){
        m = (a + b) / 2.0;
        y = catena(m);
        if(y < 0)a = m;
        else b = m;
        cout<<a<< " "<< b<<" "<<m<<" "<<y<<"\n";
    }
    a =  m;
    double x = d/(2*a);
    double ans = a*(pow(M_E, x) - pow(M_E, -x));
    cout<<setprecision(9)<<fixed<<ans<<"\n";
}
