#include <bits/stdc++.h>
using  namespace std;

int main(){
    //freopen("sample.in", "r", stdin);
    int n, m;
    cin >> n >> m;
    char arr[501][501];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int q,x,y,ans;
    bool ok;
    cin >> q;
    for(int query = 0; query < q; query++){
        
        cin >> x >> y;
        char temp[x][y];
        for(int j = 0; j < x; j++){
            for(int k = 0; k < y; k++){
                cin >> temp[j][k];
            }
        }
        ans = 0;
        
        for(int i = 0; i <= n - x; i++){
            for(int j = 0; j <= m - y; j++){
                ok = true;
                for(int k = 0; k < x && ok; k++){
                    for(int l = 0; l < y; l++){
                        if(arr[i + k][j + l] != temp[k][l]){
                            ok = false;
                            break;
                        }
                    }
                }
                if(ok)ans++;
            }
        }
        cout << ans << endl;
    }
    
}
