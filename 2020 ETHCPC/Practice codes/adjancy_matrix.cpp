#include <iostream>

using namespace std;

int arr[10000][10000];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        arr[--v][--u] = 1;
        arr[u][v] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}