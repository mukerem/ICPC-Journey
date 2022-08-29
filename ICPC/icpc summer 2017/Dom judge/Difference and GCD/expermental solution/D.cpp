#include<bits/stdc++.h>
using namespace std;
ofstream infile("f.in");
ofstream outfile("f.out");

int main(){
long long a,b;
srand(time(0));
int k=5;
while(k-->0){
a=rand()%10+1;
b=rand()%10+1;
infile<<a<<" "<<b<<endl;
if(a>b||b%a!=0)outfile<<"IMPOSSIBLE"<<endl;
else outfile<<a<<" "<<a+b<<endl;

}}
