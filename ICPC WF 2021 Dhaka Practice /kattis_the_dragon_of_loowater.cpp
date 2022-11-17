#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, x;
    while(cin>>n>>m){
        if(n+m == 0)break;
        vector<bool>vis(m, false);
        vector<int>a, b;
        int i = n;
        while(i--){
            cin>>x;a.push_back(x);
        }
        i = m;
        while(i--){
            cin>>x;b.push_back(x);
        }
        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());
        long long ans = 0;
        bool c=false;
        for(auto u: a){
            auto v = lower_bound(b.begin(), b.end(), u);
            while( v != b.end() && vis[v-b.begin()] == true)v++;
            if(v == b.end()){
                c = true;
                cout<<"Loowater is doomed!\n";
                break;
            }
            vis[v-b.begin()] = true;
            ans += *v;

        }
        if(c == false)cout<<ans<<endl;
    }
}
