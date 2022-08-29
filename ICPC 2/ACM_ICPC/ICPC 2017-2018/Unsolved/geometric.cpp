#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int m=1000000000;
long long power(long long r,long long n){
  if(n==0)return 1;
  else if(n%2==0){
    long long v =(long long)power(r,n/2);
    return ((long long)v*v)%m;
  }
  else{
    long long v =(long long)power(r,(n-1)/2);
    return ((((long long)v*v)%m)*(long long)r)%m;
  }
}
int main()
{
    long long r,n,ans;
    while(1)
    {
      cin>>r;
      if(r==-1)break;
        cin>>n;
      if(r==1)ans =r*n;
      else{
        ans =((long long)((power(r,n)-1)/(r-1)*r))%m;
      }
      cout<<setfill('0')<<setw(9)<<ans<<endl;

    }
    return 0;
}
