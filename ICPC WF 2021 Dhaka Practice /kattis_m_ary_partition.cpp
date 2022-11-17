#include <bits/stdc++.h>
using namespace std;
int NumberOfways(int N, vector<int> K)
{


    vector<int> dp(N + 1, 0);
    dp[0] = 1;

    for (auto row: K)
    {
        for (int col = 1; col < N + 1; col++)
        {

            if (col >= row)

                dp[col] = dp[col] + dp[col - row];
          }
    }

    return(dp[N]);
}

int main()
{
    int t,m,n, k, i, d;
    cin>>t;
    while(t--){
        cin>>k>>m>>n;
        vector<int>v;
        i=1;
        while(i<=n){
            v.push_back(i);
            i *= m;
        }
        d = (NumberOfways(n, v));
        cout<<k<<" "<<d<<endl;
    }

}
