#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[120][120];
int main(){
    cin>>n>>m;
    int xs,xe  = 0,ys,ye = 0;
    for (int i=0;i<=n+1;i++){
        a[0][i] = 'W';
        a[n+1][i]  = 'W';
        a[i][0] = 'W';
        a[i][m+1]  = 'W';
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cin>>a[i][j];

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1][j] == 'W' && a[i][j-1] == 'W') {
                    ys = i;
                    xs = j;
            }
            if(a[i+1][j] == 'W' && a[i][j+1] == 'W') {
                    ye = i;
                    xe = j;
            }
        }
    }
    cout<<(xs+xe)/2<<" "<<(ys+ye)/2<<endl;
}
