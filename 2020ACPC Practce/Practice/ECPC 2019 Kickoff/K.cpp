#include<bits/stdc++.h>
using namespace std;
int main(){
        freopen("plants.in","r",stdin);
    int n;
    cin>>n;
    int h[n], g[n], h1[n], g1[n], ans[n];
    for(int i=0; i<n; i++)cin>>h[i];
    for(int i=0; i<n; i++)cin>>g[i];

    for(int i=0; i<n-1 ; i++){
        h1[i] = h[i+1] - h[i];
        g1[i] = g[i+1] - g[i];
    }
    long long m = 0, c;
    for(int i=0; i<n-1; i++){
        if(h1[i] < 0){
            if(g1[i] < 0){
                cout<<-1;
                return 0;
            }
            m = max(m, (long long)ceil(abs(h1[i])/float(g1[i])));
        }
    }
    for(int i=0; i<n-1; i++){
       c = h1[i] + m * g1[i];
       if(c < 0 ){
        cout<<-1;
        return 0;
       }
    }
    cout<<m;

    return 0;
}
