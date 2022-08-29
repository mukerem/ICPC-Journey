#include<iostream>
using namespace std;
long long a,b,c[100000],total;
int main(){

while(cin>>a&&a!=-1&&cin>>b){
        total=0;
        for(int i=0;i<a;i++){
            cin>>c[i];
            total+=c[i];
        }
    cout<<(a+1)*b-total<<endl;
}
}
