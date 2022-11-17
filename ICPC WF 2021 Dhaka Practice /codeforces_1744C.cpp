#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    if(c == 'g'){cout<<0<<endl;return;}
    vector<int>v;
    for(int i=0; i<n; i++){
        if(s[i] == 'g')v.push_back(i);
    }
    //for(int i=0; i<n; i++)v.push_back(n+v[i]);
    v.push_back(n+v[0]);
    int m = -1;
    for(int i=0; i<n; i++){
        if(s[i] == c){
            auto u = lower_bound(v.begin(),v.end(), i);
            m = max(m, *u - i);
        }
    }
    cout<<m<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
