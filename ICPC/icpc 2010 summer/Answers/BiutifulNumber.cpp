#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a;
for(int i=0;i<a;i++){
    cin>>b;
    float n=(-1+sqrt(1+8*b))/2;
    cout<<"Case #"<<i+1<<": ";
    if (n-int(n)==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

}

