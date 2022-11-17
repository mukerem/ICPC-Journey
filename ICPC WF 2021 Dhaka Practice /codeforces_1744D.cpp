#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin>>n;
    int a[n], b[n], s = 0;
    vector<int>v;
    for(int i=0; i<n; i++){
        cin>>x;
        int c = 0;
        while(x%2 == 0){x /= 2;c++;}
        a[i] = c;
        s += c;
        x = i+1;
        c = 0;
        while(x%2 == 0){x /= 2;c++;}
        //b[i] = c;
        if(c)v.push_back(c);
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    if(s >= n){cout<<0<<endl;return;}
    for(int i=0; i<v.size(); i++){
        if(s + v[i] >= n){cout<<i+1<<endl;return;}
        s += v[i];
    }
    cout<<-1<<endl;


}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
