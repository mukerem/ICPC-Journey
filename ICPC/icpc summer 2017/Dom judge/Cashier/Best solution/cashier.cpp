#include<bits/stdc++.h>
using namespace std;
int main(){
long long  n,l,a,sum=0,last=0;
cin>>n>>l>>a;
for(int i=0;i<n;i++){
    long long t,ll;
    cin>>t>>ll;
    int gap = t-last;
    sum += gap/a;
    last = t+ll;
}
sum += (l - last)/a;
cout<<sum<<endl;
}
