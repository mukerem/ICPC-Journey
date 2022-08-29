#include<iostream>
using namespace std;
long long ans,t,a,b,c,s;
int main(){

cin>>t;
    for(int i=0;i<t;i++){
        cin>>s>>a>>b>>c;
        long long x = s/c;
        long long add = b*(x/a);
        cout<<x+add<<endl;
    }
}



