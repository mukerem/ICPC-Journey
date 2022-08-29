#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long  n;
    while(cin>>n&&n!=-1){
       long long a[n];
        for(long long i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        long long max=a[1]-a[0];
        for(long long i=2;i<n;i++)
            max=max<=a[i]-a[i-1]?max:a[i]-a[i-1];
        cout<<max<<endl;

    }
}
