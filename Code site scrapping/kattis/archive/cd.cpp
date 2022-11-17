// Time: 2019-11-20 20:09:18
// title: CD
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,x,c;
    while(cin>>n>>q&&(n||q)){
        unordered_set<int>u;
        for(int i=0;i<n+q;i++){
            cin>>x;
            u.insert(x);
        }
        cout<<n+q-u.size()<<endl;
    }
}
