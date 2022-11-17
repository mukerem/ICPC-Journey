// Time: 2021-09-20 18:37:33
// title: Reseto
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    bool a[n+3];
    for(int i=0; i<n+3; i++)a[i]=0;
    int c = 0;
    for(int i=2; i<=n; i++){
        for(int j=i; j<=n; j += i){
            if(a[j])continue;
            a[j]=1;
            c++;
            if(c == k){cout<<j;return 0;}
        }
    }
}
