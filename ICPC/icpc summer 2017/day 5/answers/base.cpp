#include<iostream>
using namespace std;
void base(long long n,long long m){
if(n<m)cout<<n<<" ";
else{
    base(n/m,m);
    cout<<n%m<<" ";
}
}

int main(){
long long a,b;
while(cin>>a&&a!=-1&&cin>>b){
    base(a,b);
    cout<<endl;
}
}
