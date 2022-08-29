#include<iostream>
using namespace std;
int main(){
int a,b;
int c;
while(cin>>a&&a!=-1&&cin>>b>>c){
        cout<<0<<".";
    for(int i=0;i<c;i++)
    {
    a=a*10;
    cout<<a/b;
    a=a%b;
}
cout<<endl;
}
}


