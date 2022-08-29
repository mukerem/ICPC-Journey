#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
   int  n;
    while(cin>>n&&n!=-1){
       long long a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
