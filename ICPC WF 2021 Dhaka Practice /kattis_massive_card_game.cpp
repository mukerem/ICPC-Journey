#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,q;
    cin>>n;
    vector<int> v;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cin>>q;
    int l, r;
    while(q--){
        cin>>l>>r;
        r++;
        auto a = lower_bound(v.begin(), v.end(), l);
        auto b = lower_bound(v.begin(), v.end(), r);

        cout<<b-a<<endl;
    }
}
