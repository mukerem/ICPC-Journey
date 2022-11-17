#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k, z, u;
    cin>>n>>k;
    long long x[n+1];
    vector<bool>non_leaf(n+1, false);
    for(long long i=2; i<=n; i++){
        cin>>x[i];
        non_leaf[x[i]] = true;
    }
    non_leaf[1] = true;
    vector<long long>cost;
    long long c[n+1];
    for(int i=1; i<=n; i++)cin>>c[i];
    for(int i=1; i<=n; i++){
       if(non_leaf[i])continue;
       long long y = 0;
       z = i;
       while(z != 1){
           y += c[z];
           z = x[z];
       }
       y += c[1];
       cost.push_back(y);
    }
    u = cost.size();
    vector<int>h;
    int g = 1, s=0;
    while(s+g <= k){
       s = s+g;
       h.push_back(g);
       g++;
    }
    for(int i=0; i< k-s; i++)h[i]++;
    reverse(h.begin(), h.end());
    sort(cost.rbegin(), cost.rend());

    long long tot = 0;
    for(auto e: cost)tot += e;
    long long ans = tot * (k/u);
    u = k % u;
    for(int i=0; i<u; i++)ans += cost[i];
    cout<<ans<<endl;
}
int main(){
 int t;
 cin>>t;
 while(t--)solve();
}
