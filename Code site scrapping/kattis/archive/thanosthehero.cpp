// Time: 2021-01-17 09:17:23
// title: Thanos the Hero
// language: C++


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m[50005];
int main(){
    ll n, x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m[i];
    }
    ll l =  0,  minn = 100000000000000, sum=0, a;
    /*
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
    }*/
    for(ll i=n-2; i>=0 ;i--){
        if(m[i] >= m[i+1]){
            sum += (m[i] - m[i+1] + 1);
            m[i] = m[i+1] - 1;
        }
        
        if(m[i]<0){
            cout<<1;
            return 0;
        }
    }
    cout<<sum;


}
