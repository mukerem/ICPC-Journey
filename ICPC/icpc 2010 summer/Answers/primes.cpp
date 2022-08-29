#include<bits/stdc++.h>
using namespace std;
bool x[10000]={false};
    void prime(int m){
        for(int i=2*m;i<10000;i=i+m){
            x[i]=true;
        }
    }
int main(){
int n;
for(int i=2;i<=100;i++){
       if(x[i]==false) prime(i);
    }

cin>>n;

while(n-->0){
    int a;
cin>>a;


    long long sum=0,r=2;
    for(int i=0;i<=a;){
        if(x[r]==false){
            sum+=r;
            i++;
        }
        r++;
    }
    cout<<sum<<endl;

}
}
