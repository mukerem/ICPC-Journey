#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("dull.in", stdin);
    long long n,k, t, x,m,y, ans,  c, r, s, col, row;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        set<int>X,Y;
        vector<int>hor, ver;
        vector<pair<int, int>>dull;
        map<int, int>m1, m2;

        for(int i=0; i<k ;i++){
            cin>>x>>y;
            x--;y--;
            //b[x][y] = 1;
            Y.insert(y);
            X.insert(x);
            dull.push_back({x, y});
        }
        c = 0;
        for(auto u: X){
            hor.push_back(u);
            m1[u] = c++;
        }
        c=0;
        for(auto u: Y){
            ver.push_back(u);
            m2[u] = c++;
        }
        col = ver.size();
        row = hor.size();
        int a[row][col];
        bool b[row][k];
        for(int i=0; i<row; i++)
            for(int j=0; j<col ;j++)
                b[i][j]=0;

        for(auto u: dull){
            r = m1[u.first];
            s = m2[u.second];
            b[r][s] = 1;
        }

        a[0][0]=b[0][0];// 1 or 0
        for(int i=1; i<row; i++){
            if(b[i][0])
                a[i][0]= a[i-1][0] + 1;
            else a[i][0]= a[i-1][0];
        }
        for(int i=1; i<col; i++){
            if(b[0][i])
                a[0][i]= a[0][i-1] + 1;
            else a[0][i]= a[0][i-1];
        }
       for(int i=1; i<row; i++){
            for(int j=1; j<col; j++){
                a[i][j] = a[i-1][j] + a[i][j-1] - a[i-1][j-1] + b[i][j];
            }
       }
       hor.push_back(n);
       ver.push_back(m);
       ans = 0;
       //for(auto u: hor)cout<<u<<" ";cout<<endl;
       //for(auto u: ver)cout<<u<<" ";cout<<endl;
       for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(a[i][j]&1){
                    ans += (long long )(hor[i+1] - hor[i]) * (ver[j+1] - ver[j]) ;
                }
                //cout<<a[i][j]<< " ";
            }
            //cout<<endl;
       }
       cout<<ans << " " << n*m - ans<<endl;

    }
}
