#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
long long a;
while(cin>>a&&a!=-1){
    long long c[a-1];
for(int i=0;i<a-1;i++)cin>>c[i];
for(int i=0;i<a-1;i++){
    int t=1;
    int k=c[i];
    while(true){
        if(k==a)
        break;
        else
            k=c[k];
            t++;

    }
    cout<<t<<" ";
}
cout<<endl;

}

}

