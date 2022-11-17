// Time: 2021-01-17 10:12:30
// title: Postal Delivery
// language: C++


#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v, u;

int main(){
    int n, k; cin >> n >> k;
    long long ans = 0, c = 0;
    int x, y;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if(x < 0) u.push_back({-x, y});
        else v.push_back({x, y});
    }
    int len;
    c = 0;
    for(int i=v.size()-1; i>=0; i--){

        if(c < v[i].second){
            c = v[i].second - c;
            len = v[i].first;
            ans += (c/k) * len;
            c = c%k;
            if(c){
                ans += len;
                c = k-c;
            }
        }
        else{
            c -= v[i].second;
        }

        //cout<<c<<" "<<ans<<endl;

    }
    c = 0;
    for(int i=0; i<u.size(); i++){
        if(c < u[i].second){
            c = u[i].second - c;
            len = u[i].first;
            ans += (c/k) * len;
            c = c%k;
            if(c){
                ans += len;
                c = k-c;
            }
        }
        else{
            c -= u[i].second;
        }
        //cout<<c<<" "<<ans<<endl;

    }
    cout << 2*ans << "\n";
}
