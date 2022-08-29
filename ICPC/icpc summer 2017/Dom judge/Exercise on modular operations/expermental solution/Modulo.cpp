#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");
int main(){
int a,b,c;
srand(time(0));
int k=1000;

while(k-- >0){
    a=((long long )(rand())*(long long )(rand())*(long long )(rand()))%1000000000+1;
    b=((long long )(rand())*(long long )(rand())*(long long )(rand()))%1000000000+1;
    c = ((long long )(rand())*(long long )(rand())*(long long )(rand()))%1000000000+1;
    infile<<a<<" "<<b<<" "<<c<<endl;
    long int x=a-b;
    outfile<<(a%c+b%c)%c<<" "<<(long long)(x%c+c)%c<<" "<<((long long)a%c*b%c)%c<<endl;
}
}
