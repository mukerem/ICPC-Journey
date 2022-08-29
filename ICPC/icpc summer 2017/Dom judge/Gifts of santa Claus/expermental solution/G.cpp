#include<bits/stdc++.h>
using namespace std;
ofstream infile("f.in");
ofstream outfile("f.out");

int main(){
int a;
srand(time(0));
int k=100000;
while(k-->0){
a=rand()%20+1;
infile<<a<<endl;
int c=0, b[a];
for( int i=0;i<a;i++)
{
    b[i]=rand()%20+1;
    infile<<b[i]<<" ";
    if(b[i]%2==1)c++;
}
infile<<endl;
if(c==0)outfile<<0<<endl;
else{

    long long int m=pow(2,a-1);

    outfile<<m<<endl;
}}
}


