
#include <bits/stdc++.h>
using namespace std;
int findMaxSubarraySum(int arr[], int n, int sum)
{
    // To store current sum and
    // max sum of subarrays
    int curr_sum = arr[0], max_sum = 0, start = 0;

    // To find max_sum less than sum
    for (int i = 1; i < n; i++) {

        // If curr_sum becomes greater than
        // sum subtract starting elements of array
        while (curr_sum > sum && start < i) {
            curr_sum -= arr[start];
            start++;
        }

        // Update max_sum if it becomes
        // greater than curr_sum
        max_sum = max(max_sum, curr_sum);

        // Add elements to curr_sum
        curr_sum += arr[i];
    }

    // Adding an extra check for last subarray
    if (curr_sum <= sum)
        max_sum = max(max_sum, curr_sum);

    return max_sum;
}

// Driver program to test above function
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[] = { 2, -4, 1, -4 , 4 , -5 , 1 -4 ,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;

    cout << findMaxSubarraySum(arr, n, sum);

    return 0;
}

