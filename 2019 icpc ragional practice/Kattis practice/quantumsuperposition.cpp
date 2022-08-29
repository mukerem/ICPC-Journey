#include<bits/stdc++.h>
using namespace std;
#define N 1005
vector<int>depth;
vector<int>depth2;
vector<int> graph[N];
vector<int> dp[N];

int step[2005];
int des;
bool visited[N];
void dfs(int n, int d){

    if(n == des)depth.push_back(d);
    d++;
    if(visited[n])return;
    visited[n]=true;
    for(auto u: graph[n]){
        dfs(u, d);
    }
}
int main(){
    int n1, n2, m1, m2, x,y;
    cin>>n1>>n2>>m1>>m2;
    for(int i=0; i<m1 ;i++){
        cin>>x>>y;
        graph[x].push_back(y);
    }
    des = n1;
    dfs(1, 0);
    for(int i=0; i<N; i++)
        graph[i].clear();
    depth2 = depth;
    depth.clear();
    for(int i=0; i<N; i++)visited[i]
    for(int i=0; i<m2 ;i++){
        cin>>x>>y;
        graph[x].push_back(y);
    }
    des = n2;
    dfs(1, 0);
    for(auto u: depth){
        for(auto v: depth2){
            if(u+v>2000)continue;
            step[u+v] = 1;
        }
    }
    int q, num;
    cin>>q;
    while(q--){
        cin>>num;
        if(step[num])cout<<"Yes\n";
        else cout<<"No\n";
    }
}
