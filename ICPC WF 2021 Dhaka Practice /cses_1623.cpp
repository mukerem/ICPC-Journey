#include <bits/stdc++.h>
using namespace std;

long long findMinRec(long long arr[], long long i, long long sumCalculated,
               long long sumTotal)
{
    if (i == 0)
        return abs((sumTotal - sumCalculated)
                   - sumCalculated);
    return min(
        findMinRec(arr, i - 1, sumCalculated + arr[i - 1],
                   sumTotal),
        findMinRec(arr, i - 1, sumCalculated, sumTotal));
}

long long findMin(long long arr[], long long n)
{
    long long sumTotal = 0;
    for (long long i = 0; i < n; i++)
        sumTotal += arr[i];

    return findMinRec(arr, n, 0, sumTotal);
}


int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0; i<n; i++)cin>>arr[i];
    long long m = findMin(arr, n);
    cout<<m;
    return 0;
}
