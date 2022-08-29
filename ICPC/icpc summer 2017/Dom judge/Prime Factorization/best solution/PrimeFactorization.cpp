#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a;
while(cin>>a&&a!=-1){
        long int l=2;
    bool c[a+1]={false};
    for(long int i=2;i<=sqrt(a);i++)
        if(c[i]!=true) {
            for(long int j=2*i;j<=a;j=j+i)
                if(c[j]!=true)c[j]=true;
        }
    while( a!=1){
        for(long int i=l;i<=a;i++){
            if(c[i]!=true&&a%i==0){
                cout<<i<<" ";
                l=i;
                a/=i;
                break;
    }}}
    cout<<endl;

}
}

