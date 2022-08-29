#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n,k,a[100010];
  long long b[100010];
  while (1) {
    cin>>n;if(n==-1)break;
    cin>>k;
  for (int i = 0; i < n; i++) {
    cin>>a[i];if(i==0)b[i]=a[i];
    else b[i] =b[i-1]+a[i];
  }
  long long ans=0,sum =0;
  for (int i = k-1; i < n; i++) {
    if(i == k-1)sum =b[i];
    else sum =b[i]-b[i-k];
    if(ans <sum)ans =sum;
  }
  for(int j=0;j<k-1;j++){
    int l=0;sum =b[l];
    for(int i=n-1;i>(n-k+l);i--){
      sum +=a[i];
    }
    if(ans <sum)ans =sum;
  }
  cout<<ans<<endl;
  }
}
