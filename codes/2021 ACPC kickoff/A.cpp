#include <bits/stdc++.h>
using  namespace std;

int main(){
    freopen("help.in", "r", stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        int index1, index2;
        long long maxx = 100000000000000;
        for(int i=0; i<n; i++){
            if(i-1 >= 0){
                if(a[i] + a[i-1] < maxx){
                    maxx = a[i] + a[i-1];
                }
            }
            if(i-2 >= 0){
                if(a[i] + a[i-2] < maxx){
                    maxx = a[i] + a[i-2];
                }
            }
            if(i+1 < n){
                if(a[i] + a[i+1] < maxx){
                    maxx = a[i] + a[i+1];

                }
            }
            if(i+2 < n){
                if(a[i] + a[i+2]< maxx){
                    maxx = a[i] + a[i+2];

                }
            }
        }
        //maxx = min(maxx, a[0]);
        //maxx = min(maxx, a[n-1]);
        if(n == 3){
            maxx = min(a[0], a[1]);
            maxx = min(a[2], maxx);
        }
        cout<<maxx<<endl;

    }
}
