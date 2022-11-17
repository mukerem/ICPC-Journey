#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, x, a;
    cin>>n>>x;

    long long ans = 0;
    map<long long, long long> prevSum;
    long long currSum = 0;
    for (int i = 0; i < n; i++) {
        cin>>a;
        currSum += a;
        if (currSum == x)
            ans++;
        ans += prevSum[currSum - x];
        prevSum[currSum]++;
    }
    cout<<ans;
}
