#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    char c;
    cin>>n;
    vector<tuple<int, char, int>>v;
    priority_queue<int, vector<int>, greater<int>> p;
    for(int i = 0; i< n; i++){
        cin>>a>>b;
        v.push_back({a, '+', i});
        v.push_back({b, '-', i});
        //p.push(i+1);
    }
    sort(v.begin(), v.end());
    int occupy[n], room[n], k = 0, r, order;
    for(int i=0; i<2 * n; i++){
        tie(a, c, order) = v[i];
        //cout<<a<<" "<< c<<" "<<order<<endl;
        if(c == '+'){
            if(p.empty()){
                k++;
                room[order] = k;
            }
            else{
                b = p.top();
                //cout<<b<<endl;
                p.pop();
                room[order] = b;
            }
        }
        else{
            r = room[order];
            p.push(r);
        }
    }
    cout<<k<<endl;
    for(auto u: room)cout<<u<<" ";
    return 0;
}
