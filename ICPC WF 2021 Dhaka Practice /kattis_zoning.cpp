#include <bits/stdc++.h>
using namespace std;

int main()
{
     int v;
     char x;
     cin>>v;
     vector<pair<int, int>>p[4];
     for(int i=0; i<v; i++){
         for(int j=0; j<v; j++){
             cin>>x;
             p[x-48].push_back({i, j});
         }
     }
     int path = 0, d, s;
     for(auto u: p[1]){
         s = INT_MAX;
         for(auto vv: p[3]){
            d = abs(u.first-vv.first) + abs(u.second - vv.second);
            s = min(s, d);
         }
         path = max(path, s);
     }
     cout<<path;



}
