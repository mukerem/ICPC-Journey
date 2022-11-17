#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n,a,t, m, y, ans, b, minn, maxx;
     cin>>t;
     while(t--){
         cin>>n>>m;
         vector<int>v;
         for(int i=0; i<m; i++){
             cin>>a;
             v.push_back(a);
         }
         sort(v.begin(), v.end());
         vector<int>p;
         for(int i=0; i<m-1; i++)p.push_back(v[i+1] - v[i] - 1);
         p.push_back(n - v[m-1] + v[0] - 1);
         sort(p.rbegin(), p.rend());
         ans = 0;
         int day = 1;
         for(auto u: p){
          if(u == day) {ans += 1;break;}
          if(u<day)break;
          ans += u-day;
          day += 4;
         }
         cout<<n - ans<<endl;
     }
    return 0;
}
