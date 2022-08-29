#include<bits/stdc++.h>
using namespace std;
bool rem[1000005];
int main(){
long long  n,sum=0,num;
cin>>n;
num = n;
if (num == 1)cout<<1;
else if(num == 2)cout<<1<<" "<<2;
else{
    int dis = 1;
    while(num>2){
        for(int i=dis;i<=n;i += 2*dis){
            if(num <= 2)break;
            cout<<dis<<" ";
            rem[i] = 1;
            num--;
        }
        dis *= 2;
    }
    int r[2],c=0;
    for(int i=1;i<=n;i++){
        if(!rem[i])r[c++] = i;
    }
    cout<<__gcd(r[0],r[1])<<" "<<r[1];
}
cout<<endl;
}

