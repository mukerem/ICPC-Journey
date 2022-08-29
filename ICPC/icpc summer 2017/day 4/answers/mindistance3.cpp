#include<iostream>
#include<algorithm>
using namespace std;
int search(int left ,int right ,long long n , long long x[]){
 int mid;
mid=(left+right)/2;
if (n==x[mid])
return mid;
else if(n>x[mid])
search(mid+1,right,n,x);
else
search(left,mid-1,n,x);
}

int main(){
   int  n;
    while(cin>>n&&n!=-1){
       long long a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);

        for(int i=0;i<n;i++){
            int k=search(0,n-1,b[i],a);
            if(k==0) cout<<a[1]-a[0]<<" ";
            else if (k==n-1) cout<<a[n-1]-a[n-2]<<" ";
            else  cout<<(a[k]-a[k-1]<a[k+1]-a[k]?a[k]-a[k-1]:a[k+1]-a[k])<<" ";
        }
        cout<<endl;

    }
}
