
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x[] ={3,4,2,1,6,5,7,9,8,0};
    vector<int> v(x, x+10);
    set<int> s(v.begin(), v.end());
    s.insert(v.begin(), v.end());
    s.erase(s.lower_bound(2), s.upper_bound(7));
    for(auto u:s)cout<<u<<" ";
}
