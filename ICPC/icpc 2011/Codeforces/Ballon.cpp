#include<iostream>
using namespace std;
int main(){
long long ans,t,n,x;
cin>>t;
    for(int i=0;i<t;i++){
        ans = 0;
            cin>>n;
        for(int k=0;k<n;k++){
            cin>>x;
            if (x) ans++;
        }
        cout<<ans<<endl;
    }
}

