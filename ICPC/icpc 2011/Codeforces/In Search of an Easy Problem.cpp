#include<iostream>
using namespace std;
int main(){
    int n,x;
    int ans = 0;
    cin>>n;
    for(int  i=0;i<n;i++){
        cin>>x;
        ans = ans | x;
    }
    if (ans == 0) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
}
