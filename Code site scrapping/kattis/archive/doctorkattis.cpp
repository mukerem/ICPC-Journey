// Time: 2020-12-17 10:54:28
// title: Doctor Kattis
// language: C++


#include<bits/stdc++.h>
using namespace std;
map<string, pair<int, int>> m;
set<tuple<int, int, string>> s;
int main(){
    int n;
    string x;
    int a,b,d,e;
    string f;
    cin>>n;
    int c = 1;
    while(n--){
        cin>>a;
        if(a == 0){
            cin>>x>>b;
            m[x] = {b, -c};
            s.insert({b, -c, x});
            c++;
        }
        else if(a == 1){
            cin>>x>>b;
            s.erase({m[x].first, m[x].second, x});
            m[x] = {m[x].first + b, m[x].second};
            s.insert({m[x].first, m[x].second, x});

        }
        else if(a == 2){
            cin>>x;
            s.erase({m[x].first, m[x].second, x});
            m.erase(x);
        }
        else if(a == 3){
            if(s.size() == 0){cout<<"The clinic is empty"<<endl;continue;}
            auto tt = s.end();
            tt--;
            tie(d,e,f) = *tt;
            cout<<f<<endl;
        }
        //for(auto j: s){
         //   tie(d,e,f) = j;
           // cout<<d<<" "<<e<<" "<<f<<" ";
        //}
        //cout<<endl;
    }
}
