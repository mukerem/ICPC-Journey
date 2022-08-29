#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("dull.in", stdin);
    long long n,k, e, f, K, len, c, t;
    double ans;
    cin>>t;
    while(t--){
        cin>>n>>K;
        double p[n][n];
        double a[n][n];
        for(int i=0; i<n ;i++){
            for(int j=0; j<n; j++)
                cin>>a[i][j];
        }
        int d[n];
        d[0] = n;
         len = n/2 + n%2, k = n-2;
        for(int i=1; i<len; i++){
            d[i] = d[i-1] + k;
            k -= 2;
        }
        k = len;k--;
        if(n%2)k--;
        for(int i=len; i<n; i++){
            d[i] = d[k--];
        }
        e = n + 1 - n%2;
        f = n /2 + n%2;
        c = e*f;
        c = c*c;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                p[i][j] = (double)((long long)(d[i] * d[j]) / double(c));
            }
        }
        /*
        for(int i=0; i<n; i++) cout<<d[i]<<" ";cout<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout<<p[i][j]<<" ";
            cout<<endl;
        }
        */
        ans = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] == 0 && K%2==0 || a[i][j] == 1 && K%2==1 )
                    ans += 0.5 * (1 - pow(2*p[i][j] - 1, K));
                else
                    ans += 0.5 * (1 + pow(2*p[i][j] - 1, K));
            }
        }

        cout<<fixed<<setprecision(5)<<ans<<endl;



    }
}
