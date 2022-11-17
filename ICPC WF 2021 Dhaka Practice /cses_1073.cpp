#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n,a;
     cin>>n;
     vector<int>v;
     for(int i=0; i<n; i++){
         cin>>a;
         auto k = upper_bound(v.begin(), v.end(), a);
         if(k == v.end())v.push_back(a);
         else *k = a;
     }
     cout<<v.size();
    return 0;
}
