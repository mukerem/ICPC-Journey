#include<bits/stdc++.h>
using namespace std;
int main(){
    double x;
    int n;
    while(cin>>n && n!=0){
        double s[n];
        for(int i = 0; i<n; i++)cin>>s[i];
        double sum = 0.00000000000;
        for(int i=0; i<n; i++)sum += s[i];
        long double ave = sum/ double(n);
        cout<<fixed<<setprecision(5)<<sum<<" "<<ave<<endl;
        sum = 0.0000000000;
        for(int i=0; i<n; i++)sum += abs(s[i] - ave);
        //sum /= 2.0;

        cout<<"$"<<fixed<<setprecision(3)<<sum<<endl;
    }
}
