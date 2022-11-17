// Time: 2019-11-17 14:12:42
// title: Falling Mugs
// language: C++


#include<bits/stdc++.h>
using namespace std;
bool perfect(long long n){
    double x = sqrt(n);
    if(x == (long long)(x))return true;
    return false;
}
int main(){
    long long n,s, d, x ;
    cin>>n;
    for(long long i=0; i<= 2*n; i++){
        d = i*i + n;
        if(perfect(d)){
            cout<<i<<" "<<(long long)(sqrt(d));
            return 0;
        }
    }
    cout<<"impossible";
}
