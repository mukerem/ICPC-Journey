#include<bits/stdc++.h>
using namespace std;
char str[1005][1005];
char check[1005][1005];
int main(){
long long  n,m;
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
            cin>>str[i][j];
            check[i][j] = str[i][j];
    }
}
int a,b,c,d;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            a=i-1;b=i+1;c=j-1;d=j+1;

            if(str[i][c] == '#' &&str[a][c] == '#' &&str[b][c] == '#' &&str[a][j] == '#' &&str[i][d] == '#' &&str[a][d] == '#' &&str[b][d] == '#' &&str[b][j] == '#'){
                    check[i][c] = '.';check[a][c] = '.';check[b][c] = '.';check[a][j] = '.';
                    check[i][d] = '.';check[a][d] = '.';check[b][d] = '.';check[b][j] = '.';
            }


        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(check[i][j] == '#'){
                    cout<<"NO"<<endl;
                        return 0;

            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

