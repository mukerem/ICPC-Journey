#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    vector<vector<int>>c(32);
    map<int, int>q, visit;
    for(auto i: a)
        q[i]++;
    vector<bool>v(32, false);
    vector<int>s;
    for(int d=0; d<32; d++){
        int N = 31-d;
         int z = pow(2, N)-1;
         if(v[N])continue;
         vector<pair<vector<int>, int>>r;
         for(auto i:a){
             if(z>i)continue;
             if(visit[i] == true)continue;
             if(! (i & (1<<N)))continue;
             vector<int>w;
             for(int j=N; j>=0; j--){
                 if(v[j])continue;
                 if(! (i & (1<<j)))continue;
                 w.push_back(j);

             }
             r.push_back({w, i});
         }
         if(r.size() == 0)continue;
         auto x = *max_element(r.begin(), r.end());
         cout<<x.second<<" ";
         visit[x.second] = true;
         q[x.second]--;
         for(auto j: x.first)v[j]=true;
    }

    for(auto i: q){
        for(int j=0; j<i.second; j++)cout<<i.first<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
