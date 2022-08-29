#include<iostream>
#include<algorithm>
using namespace std;
unsigned long long c[100000],maxx,total,ans;
int a,b;
void check(){
maxx=0;
int l=b<=a?0:b-a;
for(int i=b-1;i>=l;i--){
    total=((b-i)*c[i]);
    if(maxx<=total){
        maxx=total;
        ans=c[i];
    }
}
cout<<ans<<" "<<maxx<<endl;
}
int main(){
while(cin>>a&&a!=-1&&cin>>b){
for(int i=0;i<b;i++)cin>>c[i];
sort(c,c+b);
check();
}
}


