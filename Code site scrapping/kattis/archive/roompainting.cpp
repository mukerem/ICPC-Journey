// Time: 2021-01-17 10:20:59
// title: Room Painting
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x, n, m;
    cin>>n>>m;
    vector<long long> v1, v2;
    for(int i= 0 ;i<n; i++){cin>>x; v1.push_back(x);}
        for(int i= 0 ;i<m; i++){cin>>x; v2.push_back(x);}
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    long long minn = v2[0];
    
    long long sum = 0;
    for(int i = 0; i<m; i++){
        auto pt = lower_bound(v1.begin(), v1.end(), v2[i]);
        sum += (*pt - v2[i]);
    }
    cout<<sum<<endl;
}
