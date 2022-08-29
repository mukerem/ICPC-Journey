#include<iostream>
using namespace std;
int main(){
    int n,d,x;
    int ans = 0;
    cin>>n>>d>>x;
    int a,b,y;
    for(int  i=0;i<x;i++){
        cin>>a>>b;
        y = a-d;
        if(y>b){
            cout<<"NO"<<endl;

            continue;
        }
        y = a+d;
        if(y<b){
            cout<<"NO"<<endl;
            continue;
        }
        y = -a+d;
        if(y>b){
            cout<<"NO"<<endl;
            continue;
        }
        y = -a+2*n-d;
        if(y<b){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}

