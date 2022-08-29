
#include<bits/stdc++.h>
using namespace std;
int main(){
int w,h,n;
long long s = 0;
cin>>w>>h>>n;
w-=2;
for(int i=1;i<=n;i++){
    s += (w+h)*2;
    w -= 4;
    h -= 4;
}
cout<<s;

}
