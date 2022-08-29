#include<bits/stdc++.h>
using namespace std;
int arr[1000005];
int main(){
    int n , x , t = 0;
    arr[0] = 1;
    for(int i = 1; i<=1000000; i++){
        arr[i] = (arr[i-1] * i);
        while(arr[i]%10==0){
            arr[i] = arr[i]/10;
        }
        arr[i] = arr[i]%10000;
    }
    while(cin>>n && n!=0){
        cout<<arr[n]%10<<endl;
    }
}
