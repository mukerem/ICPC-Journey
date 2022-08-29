
#include<bits/stdc++.h>
using namespace std;
#define N 100005
int x[N], y[N];
int main(){
    int n,q,r1,c1,r2,c2,a,b;
    cin>>n;
    for(int i=1; i<=n; i++)cin>>x[i];
    for(int i=1; i<=n; i++)cin>>y[i];
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>r1>>c1>>r2>>c2;
        a = x[r1]+y[c1];
        b = x[r2]+y[c2];
        a%=2;b%=2;
        if(a^b)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
