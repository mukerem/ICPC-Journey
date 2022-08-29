#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll x,r;
    string s;

    while(cin>>x&& x!=-1&& cin>>s){
        if(x == 0)cout<<"Bonjour ";
        else if(x == 1)cout<<"Ola ";
        else cout<<"Hello ";
        cout<<s<<endl;
    }
    return 0;
}