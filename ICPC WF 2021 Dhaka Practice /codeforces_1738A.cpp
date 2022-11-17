#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
   ll n;
   cin>>n;
   ll a[n], b[n];
   for(int i=0; i<n; i++)cin>>a[i];
   for(int i=0; i<n; i++)cin>>b[i];

   vector<ll>c, d;
   for(int i=0; i<n; i++){
       if(a[i] == 1)c.push_back(b[i]);
       else d.push_back(b[i]);
   }
   sort(c.rbegin(), c.rend());
   sort(d.rbegin(), d.rend());
   ll k = c.size(), m = d.size();
   if(k < m){
       c.swap(d);
       swap(k, m);
   }
   if(k == m){
       ll s = 0;
       for(int i=0; i<n; i++)s += b[i];
       s *= 2;
       s -= min(c[k-1], d[m-1]);
       cout<<s<<endl;
       return;
   }
   ll s = c[k-1];
   for(int i=0; i<m; i++){
       s += 2 * (c[i] + d[i]);
   }
   for(int i=m; i<k-1; i++)s += c[i];
   cout<<s<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
