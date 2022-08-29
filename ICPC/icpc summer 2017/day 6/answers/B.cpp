#include<iostream>
#include<algorithm>
using namespace std;
int search(int right ,long long n , long long x[]){
 int mid ,left=0;
while(left<=right)
{
mid=(left+right)/2;
if (n==x[mid])return mid+1;
else if(n>x[mid])
left=mid+1;
else
right=mid-1;
}
return 0;
}
int main(){
    int n,m;
    while(cin>>n&&n!=-1&&cin>>m){
       long long a[n],b[m];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(a,a+n);
        long long x=0;
        bool r=true;
        for(int i=0;i<m;i++){
            if(r==true)x=(x+b[i])%1000000000;
            else x=((x-b[i])%1000000000+1000000000)%1000000000;
            int k=search(n-1,x,a);
            if(k!=0){
                cout<<k<<" ";
                r=true;
            }
            else {
                cout<<0<<" ";
                r=false;
            }
        }
       cout<<endl;
    }
}
