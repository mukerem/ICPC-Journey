
#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int>>p;
int main(){
    int n,t,x,y;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        p.push({x,-y});
    }
    int ans=0;
    int c = 0;
    while(c<=n && !p.empty()){
        int z = p.top().first;
        int u = p.top().second;
        cout<<z<<endl;
        p.pop();
        if(-u >= c){
            c++;
            ans+=z;
        }
    }
    cout<<ans;
}
