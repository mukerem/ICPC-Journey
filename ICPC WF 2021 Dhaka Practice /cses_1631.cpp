#include <bits/stdc++.h>
using namespace std;

int main()
{
     long long sum=0, n;
     cin>>n;
     long long a[n];

     for(int i=0; i<n; i++){
      cin>>a[i];
      sum += a[i];
     }
     long long k = *max_element(a, a+n);
     if(k > sum - k)sum = 2*k;
    cout<<sum;
    return 0;
}
