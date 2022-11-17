#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n,a,t, x, y, ans, b, minn, maxx;
     cin>>t;
     while(t--){
         cin>>n>>x;
         y = 2*x;
         ans = 0;
         cin>>a;
         minn = a;
         maxx = a;
         for(int i=1; i<n; i++){
             cin>>a;
             minn = min(minn, a);
             maxx = max(maxx, a);
             if(maxx - minn > y){
              ans++;
              minn = a;
              maxx = a;
             }
         }

         cout<<ans<<endl;
     }
    return 0;
}
