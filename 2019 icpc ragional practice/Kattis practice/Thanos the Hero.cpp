#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int m[50005];
int main(){
    ll n, x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m[i];
    }
    ll l =  0,  minn, sum=0, a;
    while(l<n){
        minn = *min_element(m+l, m+n);
        for(int i=n-1; i>=l; i--){
            if(m[i] == minn){
                a = i;
                break;
            }
        }
                //cout<<l<< " "<<r<<" "<<sum<<" "<<minn<<" "<<a<<endl;

        for(int i=a; i>l; i--){
            sum += m[i-1] - m[i] + 1;
            m[i-1] = m[i]-1;
            if(m[i-1] <0 ){
                cout<<1;
                return 0;
            }
        }
        //for(int i=0; i<n; i++)cout<<m[i]<<" ";cout<<endl;

        l = a+1;
    }
    cout<<sum;


}
