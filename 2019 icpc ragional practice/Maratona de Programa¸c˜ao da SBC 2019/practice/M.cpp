#include<bits/stdc++.h>
#define long long ll;
using namespace std;
int n,c,t;
int abc[100005];
// Function to check if mid can
// be maximum sub - arrays sum
bool check(ll mid, int n, int K)
{
    int count = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {

        // If individual element is greater
        // maximum possible sum
        if (abc[i] > mid)
            return false;

        // Increase sum of current sub - array
        sum += abc[i];

        // If the sum is greater than
        // mid increase count
        if (sum > mid) {
            count++;
            sum = abc[i];
        }
    }
    count++;

    // Check condition
    if (count <= K)
        return true;
    return false;
}

// Function to find maximum subarray sum
// which is minimum
ll solve(int n, int K)
{
    ll start = 1;
    ll end = 0;

    for (int i = 0; i < n; i++) {
        end += abc[i];
    }

    // Answer stores possible
    // maximum sub array sum
    ll answer = 0;
    while (start <= end) {
        ll mid = (start + end) / 2;

        // If mid is possible solution
        // Put answer = mid;
        if (check(mid, n, K)) {
            answer = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return answer;
}

int main(){
    cin>>n>>c>>t;
    for(int i=0; i<n ;i++){
        cin>>abc[i];
    }
    long long x = solve(n, c);
    long long y = x / t;
    if (y * t < x) y++;
    cout<<y<<endl;
}
