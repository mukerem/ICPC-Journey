// Time: 2022-08-23 17:44:47
// title: Fluortanten
// language: C++


#include<iostream>
using namespace std;
int main(){
    long long n, x, idx = 0;
    cin>>n;
    long long a[n-1];
    for (int i = 0; i<n; i++){
        cin>>x;
        if (x != 0){
            a[idx++] = x;
        }
    }
    n -= 1;
    long long ans = 0, sub = 0, m = 0;
    for(int i= 0; i< n; i++){
        ans += a[i] * (i+2);
        sub += a[i];
        m = min(m, sub);
    }
    ans -= m;
    cout<<ans;
    
    
}