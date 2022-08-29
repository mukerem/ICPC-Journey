#include<iostream>
using namespace std;
int main(){
    long long n,x,y;
    cin>>n;
    long long ans = -1;
    for (int i=0;i<n;i++){
        cin>>x>>y;
        ans = max(ans, x+y);
    }
    cout<<ans<<endl;

}

