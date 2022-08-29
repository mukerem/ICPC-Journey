#include<bits/stdc++.h>
using namespace std;
long long n,ax,ay,bx,by,cx,cy;
bool pri;
int main(){
cin>>n;
cin>>ax>>ay>>bx>>by>>cx>>cy;
if((ax-bx)*(ax-cx)<=0)cout<<"NO";
else if((ay-by)*(ay-cy)<=0)cout<<"NO";
else cout<<"YES";


return 0;
}




