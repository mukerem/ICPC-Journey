#include<iostream>
#include<algorithm>
#include<cmath>
long long a,b[10000],c[100000];
using namespace std;
long long gcfcd(long long a  , long long b){
if(b==0)return a;
return gcfcd(b,a%b);
}
long long findd(){

    long long minn=gcfcd(c[0],c[1]);
    for(int i=2;i<a-1;i++){
        minn=gcfcd(c[i],minn);
    }
    return minn;
}
int main(){
while(cin>>a&&a!=-1){
    for(int i=0;i<a;i++)cin>>b[i];
sort(b,b+a);
for(int i=0;i<a-1;i++)c[i]=b[i+1]-b[i];
sort(c,c+1);
long long minn=findd();

long long total=0;
for(int i=0;i<a-1;i++){
    total+=(c[i]/minn-1);
}
cout<<total<<endl;


}

}

