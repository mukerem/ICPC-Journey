#include <bits/stdc++.h>
using  namespace std;

void buildSumArray(long long arr[], long long n, long long sumArray[])
{
    sumArray[0] = arr[0];
    for (int i = 1; i < n; i++)
        sumArray[i] = arr[i] + sumArray[i - 1];
}
long long solveQuery(int left, int right, long long sumArray[])
{
    if (left == 0)
        return sumArray[right];
    return sumArray[right] - sumArray[left -1];
}


int main(){
    freopen("bad-memes.in", "r", stdin);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        long long sumArray[n];
        buildSumArray(a, n, sumArray);
        long long minn, maxx = -100000000000000000;
        for(int i=1; i<=n; i++){
            minn = 100000000000000000;
            for(int j=0; j + i - 1<n; j+= i){
                    minn = min(minn, solveQuery(j, j+i - 1, sumArray));
            }
            if(n%i)
                minn = min(minn, solveQuery(n - n%i, n-1, sumArray));
            maxx = max(maxx, minn);
        }
        cout<<maxx<<endl;

    }
}
