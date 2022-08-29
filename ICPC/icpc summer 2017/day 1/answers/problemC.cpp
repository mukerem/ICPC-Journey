#include<iostream>
using namespace std;
int main(){
string a,b;
do{
cin>>a;
if(a=="-1")break;
cin>>b;
if(a.length()>b.length())cout<<">"<<endl;
else if(a.length()<b.length())cout<<"<"<<endl;
else{
    if(a>b)cout<<">"<<endl;
    else if(a<b)
            cout<<"<"<<endl;
    else  cout<<"="<<endl;
}
}while(1);
}
