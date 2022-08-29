#include<bits/stdc++.h>
using namespace std;
vector<tuple<int, string, int>>v;
int main(){
    int n, m,x1,x2;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>x1>>x2;
        v.push_back({x1, "+", x2-x1 + 1});
        v.push_back({x2 + 1, "-", 0});
    }
    sort(v.begin(), v.end());
    int ans[n];
    for(int i=0; i<n; i++)ans[i] = 0;
    string c;
    int s, h, index = 0, current = 0, slope = 0;
    for(auto u: v){
        tie(s,c,h) = u;
        for(int j=index; j< s; j++){
            current -= slope;
            ans[j] -= current;
        }
        if(c == "+")slope++;
        else slope--;
        current += h;
        //cout<<s<<" "<<c<<" "<<h<<endl;
        index = s;
    }

    for(int i=0; i<n; i++)cout<<ans[i]<<" ";cout<<endl;

}
