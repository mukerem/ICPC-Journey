// Time: 2019-11-22 22:38:56
// title: Grandpa Bernie
// language: C++


#include<bits/stdc++.h>
using namespace std;
unordered_map<string, vector<int>>m;

int main(){
    int n,q,y;
    string c;
    cin>>n;
    unordered_set<string>s;;
    for(int i=0; i<n; i++){
        cin>>c>>y;
        m[c].push_back(y);
        s.insert(c);
    }
    for(auto i: s)sort(m[i].begin(), m[i].end());

    cin>>q;
    for(int i=0; i<q; i++){
        cin>>c>>y;
        cout<<m[c][y-1]<<endl;
    }
}
