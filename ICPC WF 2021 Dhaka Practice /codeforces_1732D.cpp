#include<bits/stdc++.h>
using namespace std;
int main(){
   int t, n,a ;
   cin>>t;
   while(t--){
       cin>>n;
       vector<int> x(n);
       vector<int> y(n);
       for(int i=0; i<n; i++)cin>>x[i];
       for(int i=0; i<n; i++)cin>>y[i];
       vector<int>z;
       for(int i=0; i<n; i++)z.push_back(y[i]-x[i]);
       sort(z.begin(), z.end());
       vector<bool>vis(n, false);
       int d = 0, i=n-1;
       while(i>=0){
            while(i>=0 && vis[i])i--;
            if(i<0 || z[i] < 0)break;
            vis[i]=true;
            auto u = lower_bound(z.begin(), z.end(), -z[i]);
            int j = u - z.begin();
            while(j<n && vis[j])j++;
            if(j>=n)continue;
            d++;
            vis[j]=true;
       }
       cout<<d<<endl;

   }
}
