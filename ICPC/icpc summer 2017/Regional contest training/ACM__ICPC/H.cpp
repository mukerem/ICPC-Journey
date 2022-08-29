#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a;
cin>>a;
long long b[a];
for (int i=0;i<a;i++){
    cin>>b[i];
}
sort(b,b+a);
long long c=max(b[0]*b[1]*b[a-1],b[0]*b[1]);
long long d=max(b[a-1]*b[a-2]*b[a-3],b[a-1]*b[a-2]);

cout<<max(c,d);


}

