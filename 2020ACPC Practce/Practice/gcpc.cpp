#include<bits/stdc++.h>
using namespace std;
#define N 100005
multimap<int, double> s;
int score[N], penality[N];
int main(){
    int n,m, t,p, ind;
    cin>>n>>m;
    for(int i=1; i<=n; i++)s.insert(pair <int, double> (0,0.0));
    for(int i=0; i<m; i++){
        cin>>t>>p;
        auto itp = find(s.begin(), s.end(), score[t] + 1.0/penality[t]);
        score[t]--;
        penality[t] += p;
        itp->second = score[t] + 1.0/penality[t];

        auto it = find(s.begin(), s.end(), score[t] + 1.0/penality[t]);
        ind = distance(s.begin(), it) + 1;
        cout<<ind<<endl;
    }
}
