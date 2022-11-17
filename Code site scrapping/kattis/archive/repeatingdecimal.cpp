// Time: 2019-11-17 14:16:24
// title: Repeating Decimal
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int r;
    while(cin>>a>>b>>c){
        cout<<"0.";
        for(int i=0; i<c; i++){
            a *= 10;
            cout<<a/b;
            a = a%b;
        }
        cout<<endl;
    }
}
