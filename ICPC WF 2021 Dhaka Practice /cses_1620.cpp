#include <bits/stdc++.h>
using namespace std;
long long n;
long long x;
long long f(long long A[], long long t){
long long sum = 0, q;

 for(int i=0; i<n; i++){
 q = t / A[i];
 sum += q;
 if(sum>x)return -1;
 }
 return sum;
}
int main()
{

     cin>>n>>x;
     long long a[n];
     for(int i=0; i<n; i++){
      cin>>a[i];
     }
     if(x==1){
     cout<<*min_element(a, a+n);
     return 0;
     }
     long long l = 1, r=1000000000000000000, m, k;
     while(l <= r){
        m = (l+r)/2;

        k = f(a, m);
        //cout<<m<<" "<<k<<endl;
        if(k>x || k==-1)r = m-1;
        else if(k<x)l=m+1;
        else break;

     }
     //cout<<m;
     while(true){
     k = f(a, m);
     if(k != -1&&  k<x)m++;
     else break;
     }

     while(true){
     k = f(a, m-1);
     if(k== -1 || k>=x)m--;
     else break;
     }
     cout<<m;
    return 0;
}
