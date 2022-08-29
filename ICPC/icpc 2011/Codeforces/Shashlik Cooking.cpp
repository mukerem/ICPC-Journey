#include<iostream>
#include<cmath>
using namespace std;
int n,k,ans;
int main(){

    cin>>n>>k;
    float c = 2*k+1;
    int ans =  ceil(n/c);
    cout<<ans<<endl;
    int a = k+1 ;
    int f = n % int(c) ;
    if (f < k + 1 && f) a  -= (k-f + 1);
    //cout<<a<<endl;
    for(int i=a;i<=n;i += c)
        cout<<i<<" ";


}
