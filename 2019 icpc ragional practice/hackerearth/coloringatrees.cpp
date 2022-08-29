#include<bits/stdc++.h>
using namespace std;
vector<int>city[200005];
vector<bool>visited(200005);
vector<bool>terminal(200005);
stack<int>st;
void dfs(int n){
    visited[n]=true;
    for(auto u: city[n]){
        if(!visited[u]){
            st.push(u);
            dfs(u);
        }
    }
    st.pop();
    if(!st.empty()){
        int x = st.top();
        //cout<<x<<" "<<n<<endl;
        terminal[x] = terminal[x]|terminal[n];
    }
}
int main()
{
    int n,k,u,v, ans=0, x, last, z;
    cin>>n>>k;
    for(int i=1; i<n; i++)
    {
        cin>>u>>v;
        city[u].push_back(v);
        city[v].push_back(u);
    }
    for(int i=0; i<k; i++)
    {
        cin>>x;
        terminal[x]=true;
    }

    st.push(x);
    dfs(x);
    for(int i=1;i<=n;i++){
        if(terminal[i])ans++;
    }
    cout<<ans;

}
