#include<bits/stdc++.h>
using namespace std;
long a,b,m,t;
int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>m;
        long long num = 1;
        for(int k = 0;;k++){
            if(num%m == b){
                cout<<k<<endl;
                break;
            }
            num *= a;
        }
        //cout<<(long long)(log(b%m)/log(a))<<endl;
    }
}
