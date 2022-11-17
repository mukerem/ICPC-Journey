#include <bits/stdc++.h>
using namespace std;

int main()
{
     long long n,a, b=0, m;
     cin>>n>>m;
     vector<long long>v;
     v.push_back(b);
     for(int i=0; i<n; i++){
         cin>>a;
         b += a;
         v.push_back(b);

     }
     for(int i=0; i<m ;i++){
        cin>>a>>b;

        cout<<v[b] - v[a-1]<<endl;
     }
    return 0;
}
