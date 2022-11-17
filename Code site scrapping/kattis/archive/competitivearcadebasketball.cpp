// Time: 2021-04-05 21:45:14
// title: Competitive Arcade Basketball
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string , int> p;
    unordered_map<string , bool> check;
    int n, m, maxx, y;
    string x;
    cin>>n>>maxx>>m;
    for(int i=0; i<n; i++){
        cin>>x;
        p[x] = 0;
        check[x] = false;
    }
    bool s = false;
    for(int i=0; i<m; i++){
        cin>>x>>y;
        p[x] += y;
        if(p[x] >= maxx){
            if(!check[x]){
                cout<<x<<" wins!\n";
                check[x] = true;
                s = true;
            }
        }
    }
    if(!s) cout<<"No winner!\n";
}
