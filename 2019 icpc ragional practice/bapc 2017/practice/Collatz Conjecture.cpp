#include<bits/stdc++.h>
using namespace std;
long long arr[500005], n, last,b ;
set<long long >ans;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    for(int k=0; k<n; k++)
    {
        ans.insert(arr[k]);
        last = arr[k];
        for(int i=k+1; i<n; i++)
        {
            b = __gcd(last, arr[i]);
            ans.insert(b);
            last = b;
        }
    }
    cout<<ans.size()<<endl;
}
