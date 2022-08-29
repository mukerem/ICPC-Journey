#include<iostream>
#include<string>
using namespace std;
string b[105];
string fun(int m){
    for(int i=0;i<m;i++){
        if(b[i]==b[m])return "YES";
    }
    return "NO";
}
int main(){
int n;
cin>>n;

for(int i=0;i<n;i++){
    cin>>b[i];
    cout<<fun(i)<<endl;
}
}
