#include<bits/stdc++.h>
using namespace std;
int x[105];
long long ans;
float ans2;
int main(){
    int n,t;
    cin>>t;
    while (t--){
        cin>>n;
        ans = 0;
        for(int i=0; i<n;i++){
            cin>>x[i];
            ans += x[i];
        }
        ans2 = ans/ float(n);
        ans2 = int(ceil(ans2));
        cout<<ans2<<endl;
    }
}
