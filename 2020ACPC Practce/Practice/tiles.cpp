#include<bits/stdc++.h>
using namespace std;
int M = 1000000007;
int main(){
    int n,m;
    cin>>n;
    n++;
    int x[105];
    x[0]=0;
    x[1]=1;
    for(int i=2; i<=n ;i++)x[i]=(x[i-1]+x[i-2])%M;
    cout<<x[n];

}
