#include<iostream>
#include<cmath>
using namespace std;
int n,x;
int minn = INT_MAX , maxx = INT_MIN;
long long sum = 0;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        sum += abs(x);
        minn = min(minn , x);
        maxx = max(maxx , x);
    }
    if(n == 1){
        cout<<x<<endl;
        return 0;
    }
    if (sum == 0){
        cout<<0<<endl;
        return 0;
    }
    if( minn <0 && maxx >0)cout<<sum<<endl;
    else if (maxx > 0)
        cout<<sum - 2*minn<<endl;
    else
        cout<<sum - 2*abs(maxx)<<endl;
    //else if(minn < 0) cout<<sum -
}
