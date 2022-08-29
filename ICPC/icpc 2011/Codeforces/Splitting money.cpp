#include<bits/stdc++.h>
using namespace std;
long long n,f1,f2;
int coin[200005];
long long fee =0 ;
int main(){
    cin>>n;
    for(int i=0 ; i<n;i++){
        cin>>coin[i];
    }

    sort(coin, coin+n);
    cin>>f1>>f2;
    for(int i=n-1;i>=0;i--){
        if(coin[i] <= f1)break;
        int temp = coin[i];
        long long x = temp/(f1+f2);
        fee += x * f2;
        if(temp%(f1+f2)>f1) fee += f2;
    }
    cout<<fee<<endl;
}
