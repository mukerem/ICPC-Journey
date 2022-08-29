#include<bits/stdc++.h>
using namespace std;
int arr[300005], lis[300005], lds[300005];

void LIS( int n )
{

    lis[0] = 1;

    /* Compute optimized LIS values in bottom up manner */
    for (int i = 1; i < n; i++ )
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++ )
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
}

void LDS( int n )
{

    lds[0] = 1;

    /* Compute optimized LIS values in bottom up manner */
    for (int i = 1; i < n; i++ )
    {
        lds[i] = 1;
        for (int j = 0; j < i; j++ )
            if ( arr[i] < arr[j] && lds[i] < lds[j] + 1)
                lds[i] = lds[j] + 1;
    }
}

int main()
{
    long long n,x, c, k;
    cin>>n;
    long long sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    LIS(n);
    LDS(n);
    for(int i=0; i<n; i++){
        sum += max(lis[i], lds[i]) - 1;
        cout<<lis[i]<<" "<<lds[i]<<" ";
        cout<<sum<<endl;
    }

}
