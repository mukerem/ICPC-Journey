#include<iostream>
using namespace std;
long long a[1005] , b[1005];
long long  n,w[3] , y[3] , p[3];
long long pink, yellow, white;
long long ans[3] ;
int main(){

    cin>>n;
    for(int i  =0 ;i<n ; i++) cin>>a[i];
    for(int i  =0 ;i<n ; i++) cin>>b[i];

    for(int  i  = 0;i<n ;i++){
            ans[i%3] += a[i];

    }
    w[0] = ans[0];  w[1] = ans[2]; w[2] = ans[1];
    y[0] = ans[1];  y[1] = ans[0]; y[2] = ans[2];
    p[0] = ans[2];  p[1] = ans[1]; p[2] = ans[0];

    for(int i = 0;i<n;i++){
        white += w[i%3] * b[i];
        yellow +=  y[i %3] * b[i];
        pink += p[i % 3] * b[i];

    }

    cout<<yellow<<" "<<pink<<" "<<white<<endl;
    return 0;
}
