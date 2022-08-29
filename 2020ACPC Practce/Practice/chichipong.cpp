#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int n=a.size(), m=b.size();
    int x[n+1][m+1];
    for(int i=0; i<= n; i++)x[i][0] = 0;
    for(int i=0; i<=m; i++) x[0][i] = 0;
    for(int i=1; i<= n; i++){
        for(int j=1; j<= m; j++){
            if(a[i-1] == b[j-1])x[i][j] = x[i-1][j-1] + 1;
            else x[i][j] = max(x[i-1][j], x[i][j-1]);
        }
    }
    cout<<x[n][m];

}
