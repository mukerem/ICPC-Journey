#include<bits/stdc++.h>
using namespace std;
long long n,a,b;
bool pri;
int main(){
cin>>n;
for(int i=0;i<n;i++){
    pri = true;
    cin>>a>>b;
    if(a != b+1){
        cout<<"NO"<<endl;
        pri = false;
    }
    else{
        long long c=a+b;
        for(long long k=2;k*k<=c;k++){

            if(c%k == 0){
            cout<<"NO"<<endl;
            pri = false;
            break;
            }
        }
        if(pri)
        cout<<"YES"<<endl;
    }
}
return 0;
}



