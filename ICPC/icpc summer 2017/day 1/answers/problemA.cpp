#include<iostream>
using namespace std;
int main(){
string a,b,c,d,k,l,m,n;
do{
    cin>>a;
    if(a=="-1")break;
    cin>>b>>c>>d;
    k=a[0]-32;
    l=b[0]-32;
    m=c[0]-32;
    n=d[0]-32;
    cout<<k<<l<<m<<n<<endl;

}while(1);
}
