#include<iostream>
using namespace std;
int main(){
long long a;
while(cin>>a&&a!=-1){
bool c=true,check=true;
long long b[a][2],k;
for(int i=0;i<a;i++){
for(int j=0;j<2;j++){
cin>>b[i][j];
}
if(b[i][1]>=0&&b[i][0]<=0){
   check=false;
}
else if(check){
    if(b[i][0]<0||b[i][1]<0){
        k=b[i][1]-b[i][0]+1;
        if(k%2==1&&c==true)c=false;
        else if(k%2==1&&c==false)c=true;
    }
}
}
if(!check)cout<<0<<endl;
else if(c==true)cout<<"+"<<endl;
else cout<<"-"<<endl;
}}


