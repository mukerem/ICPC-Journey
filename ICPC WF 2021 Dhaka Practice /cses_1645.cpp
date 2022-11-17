#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n;
    stack<pair<int, int>>s;

    for(int i=1; i<=n; i++){
         cin>>x;
         while(!s.empty() && s.top().first >= x)s.pop();

         if(s.empty())
              cout<<0<<" ";
         else
              cout<<s.top().second<<" ";
         s.push({x, i});
    }


}
