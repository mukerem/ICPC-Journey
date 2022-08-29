#include<bits/stdc++.h>
using namespace std;
#define N 100005
bool vis[N];
int a[N];
int n;
vector<int> ans, anss, ans2, ans3;
void sort(int u){
    if (vis[u]) return ;
    vis[u] = 1;
    ans.push_back(a[u]);
    //cout<<u<<" "<<a[u]<<endl;
    for(int i=1; i<= n; i++){
        if(a[u] & a[i])sort(i);
    }
    for(int i=1; i<= n; i++){
        if((a[u] & !a[i]) == a[u])sort(i);
    }


}

int main(){
    cin>>n;

    for(int i=1; i<=n; i++)cin>>a[i];


    sort(1);
    //for(int i=0; i<n ;i++)cout<<ans[i]<<" ";
    for(int i=1; i<= n; i++){
        if(!vis[i])ans.push_back(a[i]);
    }

    for(int i=0; i<n ;i++)cout<<ans[i]<<" ";
/*
    for(int i=1; i<=n ; i++){
        if(a[i] && !(a[i] & a[i] - 1) ) ans3.push_back(a[i]);
        else ans2.push_back(a[i]);
    }

*/

}
