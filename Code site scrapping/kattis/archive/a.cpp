// Time: 2020-12-17 10:02:01
// title: Shiritori
// language: C++


#include <bits/stdc++.h>

using namespace std;
map<string, bool> a;
vector<string> v;

int main(){
    bool z = 1, y = 1;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string x; cin >> x;
        if (i > 0){
            if(i%2 == 0 && (a.count(x) || x[0] != v[i-1][v[i-1].size()-1])){
              
                y = 0;
                break;
            }else if(a.count(x) ||  x[0] != v[i-1][v[i-1].size()-1]){
                z = 0;
                break;
            }
        }
        a.insert({x, 1});
        v.push_back(x);
    }
    
    if (z && y) cout << "Fair Game\n";
    else if(z) cout << "Player 1 lost\n";
    else cout << "Player 2 lost\n";
}