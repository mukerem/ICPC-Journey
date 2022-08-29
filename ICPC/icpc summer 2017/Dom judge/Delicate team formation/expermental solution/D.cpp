#include<bits/stdc++.h>
using namespace std;
ofstream infile("b.in");
ofstream outfile("b.out");

int main(){
long long a;
srand(time(0));
int k=3;
while(k-->0){
a=rand()%100+1;
infile<<a<<" "<<endl;
long long c=3*a,b[3*a];
for(int i=0;i<c;i++){
        b[i]=rand()%1000+1;
        infile<<b[i]<<" ";
}
infile<<endl;
sort(b,b+c);
long long t=0;
for(int i=c-2;i>=a;i-=2)t+=b[i];
outfile<<t<<endl;
}}

