// Time: 2020-12-16 09:46:28
// title: Out of Sorts
// language: C++


#include <iostream>


using namespace std;

long long arr[1000000];

bool binary(int k, long long arr[], int n){
    int left = 1, right = n, mid;
    while(left <= right){
        mid = (left + right) / 2;
        if(arr[mid] < k) left = mid + 1;
        else if(arr[mid] > k) right = mid - 1;
        else return true;
    }
    return false;
}

int main(){
    long long n, m, a, c, x;
    cin >> n >> m >> a >> c >> arr[0];
    for(int i = 1; i <= n; i++){    
        arr[i] = (((a * arr[i - 1]) % m) + c % m) % m;
    }
    long long ans = 0;
    for(int i = 1; i <= n; i++){
        if(binary(arr[i], arr, n)) ans++;
    }
    cout << ans <<endl;
    // for(int i = 1; i <= n; i++) cout << arr[i] << " ";

}