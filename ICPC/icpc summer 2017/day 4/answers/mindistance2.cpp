#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int  n;
    while(cin>>n&&n!=-1){
        long long  a[n];
        for(long long i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        long long max=a[1]-a[0];
        long long max2= a[2]-a[0];
        for(long long i=2;i<n-1;i++){
           if(max>a[i]-a[i-1]){
                max2=max;
                max=a[i]-a[i-1];
           }
           else if(max2>a[i]-a[i-1]&&a[i]-a[i-1]!=max)max2=a[i]-a[i-1];

           else
                if(max2>a[i+1]-a[i-1])max2=a[i+1]-a[i-1];
        }
        if(max>a[n-1]-a[n-2])
                max2=max;
        else if(max2>a[n-1]-a[n-2]&&a[n-1]-a[n-2]!=max)
            max2=a[n-1]-a[n-2];
        cout<<max2<<endl;

    }
}
