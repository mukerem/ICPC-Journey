#include<iostream>
using namespace std;
int mat[8][28];
int main(){
    int t, n, m, c,j, i, k;
    cin>>t;
    for( i=0;i<t;i++){
        cin>>n>>m;
        for( j=0;j<n;j++){
            for( k=0;k<m; k++)cin>>mat[j][k];
        }
        for(j=0;j<m;j++){
            c = 0;
            for( k=0;k<n; k++)
                if(mat[k][j]){
                    c++;
                    if (c > 2) break;

                }
            if(c!=2){cout<<"No\n";break;}
        }
        if(j==m)cout<<"Yes\n";
    }
}
