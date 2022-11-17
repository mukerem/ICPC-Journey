// Time: 2019-11-27 11:41:33
// title: A Favourable Ending
// language: C++


#include<bits/stdc++.h>
using namespace std;
long long page[405];
unordered_map<int, tuple<int, int, int>> m;

long long rec(int n){
    if (page[n] != -1)return page[n];
    long long x = 0;
    vector<int>v;
    int a,b,c;
    v.push_back(get<0>(m[n]));
    v.push_back(get<1>(m[n]));
    v.push_back(get<2>(m[n]));

    for(auto vv: v){
        x += rec(vv);
    }
    page[n] = x;
    return x;
}
int main(){
    int t,n;
    cin>>t;
    string x;
    int p, a,b,c, y;
    while(t--){


        cin>>n;

        for(int i=0; i<n ;i++){
            cin>>p>>x;
            if (x == "favourably")page[p]=1;
            else if(x == "catastrophically")page[p]=0;
            else{
                cin>>a>>b;
                c = stoi(x);
                m[p] = make_tuple(c, a,b);
                page[p] = -1;
            }

        }
        long long ans = 0;
        ans = rec(1);
        cout<<ans<<endl;
        m.clear();
    }
}
