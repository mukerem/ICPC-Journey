
#include<iostream>
using namespace std;
#define maxx 105
int  main(){
    int n,a=0,b=0,c=0,d=0,e=0,m[maxx];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>m[i];
        if(a==0)a=m[i];
        else if(b==0&&a!=m[i])b=m[i];

        if(a==m[i])d++;
        else if(b==m[i]) e++;
        else c=1;

    }
    if(c==1||d!=e)cout<<"NO\n";
    else{
        cout<<"YES\n"<<a<<" "<<b;
    }
}
