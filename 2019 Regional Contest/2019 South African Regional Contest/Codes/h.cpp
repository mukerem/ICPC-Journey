#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
vector<int> v;
int main()
{
    int n, m, k;
    while(cin >> n && n != -1){
        cin >> m >> k;
        ll an = 0;
        for(int i=0; i<k; i++){
            int x;
            cin >> x; v.push_back(x);
            an += x;
        } 
        sort(v.rbegin(), v.rend());
        // for(int i=0; i<k; i++) cout << v[i] << " ";
        // cout << "\n";
        // cout << an << "==\n";
        int i = n;
        while(i < k){
            int j = i, l = m;
            while(j < k && l--) an -= v[j++];
            i += (m+n);
            // cout << an << "==\n";
        }
        cout << an << "\n";
        v.clear();
    }
    
    return 0;
}