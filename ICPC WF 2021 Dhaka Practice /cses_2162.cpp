#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     queue<int>q;
     for(int i=1; i<=n; i++){
         q.push(i);
     }
     int a,b;
     for(int i=0; i<n-1; i++){
         a = q.front();

         q.pop();
         b = q.front();
         q.pop();
         cout<<b<<" ";
         q.push(a);
     }
     cout<<q.front();
    return 0;
}
