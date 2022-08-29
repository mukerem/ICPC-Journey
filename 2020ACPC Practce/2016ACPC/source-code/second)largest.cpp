#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        int n=3;

        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        sort(arr, arr + n);
        cout<<arr[n-2]<<endl;
    }
}
