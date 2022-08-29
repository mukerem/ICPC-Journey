#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");
long long gcd(long  a,long b){
return b==0?a:gcd(b,a%b);
}
int main(){
long long a,b,g;
srand(time(0));
int k=10;
while(k-->0){
        a=rand()%100 +2;
        b=rand()%100 +2;

        infile<<a<<" "<<b<<endl;
        g=gcd(a>b?a:b,a<b?a:b);
outfile<<g<<" "<<(long long)((long long )a*b/(long long )g)<<endl;
}
}

