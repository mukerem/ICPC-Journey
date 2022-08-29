#include <bits/stdc++.h>
using  namespace std;

int main(){
    freopen("sample.in", "r", stdin);
    int n, m;
    cin >> n >> m;
    char arr[501][501];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int kk; cin >> kk;
    for(int ij = 0; ij < kk; ij++){
        int x, y;
        cin >> x >> y;
        char temp[x][y];
        for(int j = 0; j < x; j++){
            for(int k = 0; k < y; k++){
                cin >> temp[j][k];
            }
        }
        int ans = 0;
        bool ok;
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
    /*
    int k; cin >> k;

    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        char temp[x][y];
        for(int j = 0; j < x; j++){
            for(int k = 0; k < y; k++){
                cin >> temp[j][k];
            }
        }
        int ans = 0;
        bool ok = true;
        for(int i = 0; i <= n - x; i++){
            ok = true;
            for(int j = 0; j <= m - y; j++){
//                if(!ok) break;
                ok = true;
                for(int k = 0; k < x; k++){
                    if(!ok) break;
                    for(int l = 0; l < y; l++){
                        if(arr[i + k][j + l] != temp[k][l]){
                            ok = false;
                            break;
                        }
                    }
                }
                if(ok)ans++;
            }
//            if(ok) ans++;
        }
        cout << ans << endl;
    }
    */
}
