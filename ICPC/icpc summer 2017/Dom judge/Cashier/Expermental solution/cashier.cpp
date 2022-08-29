#include<bits/stdc++.h>
using namespace std;
ofstream infile("b.in");
ofstream outfile("b.out");
int main(){
long long  n,l,a,sum=0,last=0;
     n=(rand())%100+1;
     l=((long long )rand()*(long long )rand())%100000+100000;
     a=(rand())%90+1;

infile<<n<<" "<<l<<" "<<a<<endl;
for(int i=0;i<n;i++){
    long long t,ll;
    ll=(rand())%100 + 1;
    t=(rand())%(100-ll+1)+i*100;
    infile<<t<<" "<<ll<<endl;
    int gap = t-last;
    sum += gap/a;
    last = t+ll;
}
sum += (l - last)/a;
outfile<<sum<<endl;
}
