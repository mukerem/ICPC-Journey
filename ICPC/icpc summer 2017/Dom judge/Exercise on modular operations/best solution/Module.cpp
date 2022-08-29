#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
while(cin>>a&&a!=-1&&cin>>b&&cin>>c){

    long int x=a-b;
    cout<<(a%c+b%c)%c<<" "<<(long long)(x%c+c)%c<<" "<<((long long)a%c*b%c)%c<<endl;
}
}

