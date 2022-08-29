#include<bits/stdc++.h>
using namespace std;
long long int a,b,c,t;
int main(){
cin>>t;
for(int i=0;i<t;i++){
    cin>>a>>b>>c;
    if ((a-b)*c <= 0)
        cout<<0<<endl;
    else
        cout<<(a-b)*c<<endl;
}

return 0;
}


