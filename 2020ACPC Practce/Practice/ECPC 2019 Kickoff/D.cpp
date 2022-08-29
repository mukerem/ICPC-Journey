#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("gcd.in","r",stdin);
    long long g,a,b,c,q,l,r;
    cin>>q;
    cin>>l>>r;
    if(l == r)a = l;
    else a = 1;
    g = a;
    cout<<g<<endl;
    q--;
    while(q--){
        cin>>l>>r;
        if(l == r)a = l;
        else a = 1;

        g = __gcd(g, a);
        cout<<g<<endl;

    }
}
