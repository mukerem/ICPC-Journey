#include<bits/stdc++.h>
using namespace std;
long long a[10000];
int main(){
    long long y, x  = LONG_LONG_MAX;
    a[0] = 1;a[1] = 1; a[2] = 1; a[3] = 1;
    for(int i=4; i<=10000; i++){
        a[i]= a[i-1] + a[i-2] + a[i-3];
    }
    while(cin>>y){
        cout<<a[y]<<endl;
    }
}