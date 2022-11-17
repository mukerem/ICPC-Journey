#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n, m, a;
     cin>>n>>m;
     vector<int>p;
     multimap<int, int>v;

     for(int i=0; i<n; i++){
      cin>>a;
      v.insert({a, a});
     }
     //sort(v.begin(), v.end());
     for(int i=0; i<m; i++){
         cin>>a;
         //auto k = lower_bound(v.begin(), v.end(), a+1);
         auto k = v.lower_bound(a + 1);
         if(k == v.begin()){cout<<-1<<endl;continue;}
         k--;
         cout<<k->first<<endl;
         v.erase(k);
     }

    return 0;
}
