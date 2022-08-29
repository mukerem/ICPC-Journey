#include<iostream>
#include<algorithm>
using namespace std;
int n,s;
int arr[200005];
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr, arr + n);
    long long ans = 0;
    int mid = n/2;
    if(arr[mid] == s){
        ans = 0;
    }
    else if(arr[mid] > s){
        for(int i=mid;i>=0 && arr[i] > s;i--){
            ans += (arr[i] -s);
        }
    }
    else{
        for(int i=mid;i<n && arr[i] < s;i++){
            ans += (s - arr[i] );
        }
    }
    cout<<ans<<endl;
}
