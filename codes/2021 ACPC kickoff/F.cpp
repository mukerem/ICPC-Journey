#include <bits/stdc++.h>
using  namespace std;

int main(){
    freopen("protecting-memes.in", "r", stdin);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        string a,b, c, d;
        cin>>n>>m>>a>>b>>c;
        d = c;
        int r=n-1, l=m-1;
        while(l>=0){
            if(a[r] == b[l]){
                d[r] = '0';
                l--;
            }
            r--;
        }
        cout<<d<<endl;

    }
}
