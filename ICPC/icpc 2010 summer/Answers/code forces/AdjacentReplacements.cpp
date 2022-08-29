#include<iostream>
using namespace std;
long long a[1000];

int main(){
long long n;
cin>>n;
for (int i=0;i<n;i++){
    cin>>a[i];
    if (a[i]%2==1)a[i]++;
}
for (int i=0;i<n;i++){
    cout<<a[i]-1<<" ";
}
}
