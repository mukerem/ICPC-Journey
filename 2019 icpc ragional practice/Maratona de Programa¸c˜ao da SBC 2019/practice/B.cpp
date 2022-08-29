#include<bits/stdc++.h>
using namespace std;
int x[10005];
int main(){
    int n,a;
    bool c = true;
    cin>>n>>x[0];
    for(int i=1; i<n; i++){
        cin>>x[i];
        if(x[i] > x[0])c=false;
    }
    if(c)cout<<"S"<<endl;
    else cout<<"N"<<endl;
}
