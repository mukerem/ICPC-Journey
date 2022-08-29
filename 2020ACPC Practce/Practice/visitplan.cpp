#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e;
    cin>>v>>e;
    vector<int>l[v+1];
    for(int i=0; i<e; i++){
        int x,y;
        cin>>x>>y;
        l[x].push_back(y);
        l[y].push_back(x);

    }
    bool vis[v+1];
    fill_n(vis, v+1, false);
    queue<int>q;
    int s;
    cin>>s;
    q.push(s);
    while(!q.empty()){
        s = q.front();
        q.pop();
        if(vis[s])continue;
        cout<<s<<" ";
        vis[s]=1;
        for(auto u: l[s])
            if(!vis[u])
                q.push(u);
    }


}
