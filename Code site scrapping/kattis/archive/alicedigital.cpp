// Time: 2019-11-26 17:31:20
// title: Alice in the Digital World
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, m, l, r, ans, left, right;
    bool ok;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n];
        for(int i=0; i<n;i++)cin>>arr[i];
        ans = 0; left = 0, right = 0;
        ok = false;
        for(int i= 0 ; i<n ;i++){
            if(arr[i] == m){
                ans = max(ans, left + right + m);
                left = right;
                right = 0;
                ok = true;
            }
            else if(arr[i] < m){
                if(ok)ans = max(ans, left + right + m);
                ok=false;
                left = 0;
                right = 0;
            }
            else{
                right += arr[i];
            }
            //cout<<left<<" "<<right<<" "<<ans<<endl;
        }
        if(ok)ans = max(ans, left + right + m);
        cout<<ans<<endl;
    }
}
