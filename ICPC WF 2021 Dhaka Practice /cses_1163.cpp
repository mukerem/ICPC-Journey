#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n, a, y, z, w;
    cin>>x>>n;
    multiset<int>m;
    set<int>s;
    for(int i=0; i<n; i++){
       cin>>a;
       auto u = s.lower_bound(a);

       if(u != s.end()) y = *u;
       else y = x;

       if(u == s.begin()) z = 0;
       else u--,z = *u;
       //cout<<y<<" "<<z<<endl;
       w = y-z;
       auto k = m.find(w);
       if(k != m.end())m.erase(k);

       m.insert(y-a);
       m.insert(a-z);
       s.insert(a);

       k = m.end();
       k--;
       cout<<*k<<endl;


    }


}
