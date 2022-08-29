#include<bits/stdc++.h>
using namespace std;
int lds(int arr[], int n)
{
	int lds[n];
	int i, j, max = 0;

	// Initialize LDS with 1 for all index
	// The minimum LDS starting with any
	// element is always 1
	for (i = 0; i < n; i++)
		lds[i] = 1;

	// Compute LDS from every index
	// in bottom up manner
	for (i = 1; i < n; i++)
		for (j = 0; j < i; j++)
			if (arr[i] < arr[j] && lds[i] < lds[j] + 1)
				lds[i] = lds[j] + 1;

	// Select the maximum
	// of all the LDS values
	for (i = 0; i < n; i++)
		if (max < lds[i])
			max = lds[i];

	// returns the length of the LDS
	return max;
}


int main()
{

    int n,k;
    int arr[100];
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans = lds( arr, n );
    //cout<<ans<<endl;
    if (ans>k)
        cout<<"NO"<<endl;
        //printf("NO");
    else
        cout<<"YES"<<endl;
        //printf("YES");

    return 0;
}
