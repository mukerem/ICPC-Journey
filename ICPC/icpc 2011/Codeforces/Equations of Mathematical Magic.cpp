#include<iostream>
using namespace std;
int t,a,n;

int main(){
    cin>>t;
    while(t--){
            cin>>a;
        int ans=1;
        while(a){
                if (a%2)
                    ans *= 2;
                a = a/2;
        }
        cout<<ans<<endl;

    }
}
