#include <bits/stdc++.h>
using namespace std;

int main()
{
     long long sum=0, n, a,b;
     cin>>n;
     vector<pair<int, int>>v;

     for(int i=0; i<n; i++){
      cin>>a>>b;
      v.push_back({a, b});
     }
     sort(v.begin(), v.end());

     long long k = 0;
     for(auto u: v){
      k += u.first;
      sum += (u.second - k);
     }
     cout<<sum;
    return 0;
}
