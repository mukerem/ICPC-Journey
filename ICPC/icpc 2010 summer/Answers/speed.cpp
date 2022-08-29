
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
while(cin>>n&&n!=-1){
        long long  x,y,z=0,sum=0;

    for(int i=0;i<n;i++){
        cin>>x>>y;
        sum+=x*(y-z);
        z=y;
    }
    cout<<sum<<" miles"<<endl;
}
}
