#include<iostream>
#include<cmath>
using namespace std;
int n,ans;
int main(){
    cin>>n;
    ans = int(log2(n)) + 1;
    cout<<ans<<endl;
}

