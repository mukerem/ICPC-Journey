#include<bits/stdc++.h>
using namespace std;
#define N 100005
set<tuple<int, int,int>> s;
int score[N], penality[N];
int main(){
    int n,m, t,p, ind;
    cin>>n>>m;
    for(int i=1; i<=n; i++)s.insert({0,0,i});
    for(int i=0; i<m; i++){
        cin>>t>>p;
        auto itp = find(s.begin(), s.end(), make_tuple(score[t], penality[t], t));
        s.erase(itp);
        score[t]--;
        penality[t] += p;
        s.insert({score[t], penality[t], t});
        auto it = find(s.begin(), s.end(), make_tuple(score[1], penality[1], 1));
        ind = distance(s.begin(), it) + 1;
        cout<<ind<<endl;
    }
}
