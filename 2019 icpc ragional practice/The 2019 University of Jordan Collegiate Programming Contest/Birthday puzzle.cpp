#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20], n;
    cin>>n;
    for(int i=0; i<n ;i++)cin>>a[i];
    int x = pow(2,n);
    long long ans = 0;
    int k,c,z;
    for (int i=1; i<x;i++){
        k = 0;
        c = 0;
        z = i;
        while (z){
            if(z&1){
                k = k|a[c];
            }
            c++;
            z /= 2;
        }
        ans += k;
    }
    cout<<ans<<endl;
}
