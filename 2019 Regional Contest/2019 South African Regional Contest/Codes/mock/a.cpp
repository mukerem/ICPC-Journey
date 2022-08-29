#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll x,r;
    while(cin>>x&& x!=-1){
        while(x){
        r = sqrt(x);
        cout<<r<<"^"<<r<<" ";
        x -= r*r;
        }
        cout<<endl;
    }
    return 0;
}