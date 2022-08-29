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
        long long total = 0, max1=-1, max2=-1;
        for(int i=0; i<n; i++){
            cin>>a[i]; total += a[i];
            if(max1 < a[i]){
                max2 = max1;
                max1 = a[i];

            }
            else max2 = max(max2, a[i]);


        }
        long long left = 0, right=total - a[0], minn = 1000000000000000000;
        for(int i=0; i<n-1; i++){
            right -= a[i+1];
            minn = min(minn, max(left, right));
            left += a[i];
        }

        minn = min(minn, total - max1 - max2);
        cout<<minn<<endl;

    }
}
