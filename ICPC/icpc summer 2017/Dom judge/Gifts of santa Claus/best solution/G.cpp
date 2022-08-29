#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a;
while(cin>>a&&a!=-1){
int c=0, b[a];
for( int i=0;i<a;i++)
{
    cin>>b[i];
    if(b[i]%2==1)c++;
}
if(c==0)cout<<0<<endl;
else{

    long long int m=pow(2,a-1);

    cout<<m<<endl;
}}
}


