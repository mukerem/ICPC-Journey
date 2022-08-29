#include<bits/stdc++.h>
using namespace std;
ofstream infile("f.in");
ofstream outfile("f.out");
long long gcfab(long long a  , long long b){
if(b==0)return a;
return gcfab(b,a%b);
}
long long gcfcd(long long a  , long long b){
if(b==0)return a;
return gcfcd(b,a%b);
}
int main(){
long long a,b,c;
srand(time(0));
    int k=10000;
    while(k-->0){
    a=rand()%1000000+1;
    b=rand()%1000000+1;
    c=rand()%1000000+1;
    infile<<a<<" "<<b<<" "<<c<<endl;
long long d=a*b/gcfab(a,b);
outfile<<c*d/gcfcd(c,d)<<endl;
}
}


