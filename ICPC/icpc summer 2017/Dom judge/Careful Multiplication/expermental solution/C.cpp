#include<bits/stdc++.h>
using namespace std;
ofstream infile("b.in");
ofstream outfile("b.out");
long long a,b,c;
int check(long long num){
for(int i=0;i<=18;i++)
if(pow(10,i-1)<=num&&pow(10,i)>num)
return i;
}
int main(){
 srand(time(0));
    int k=100;
while(k-->0){
    a=rand()%int(pow(10,18))+1;
    b=rand()%int(pow(10,18))+1;
    c=rand()%int(pow(10,18))+1;
    infile<<a<<" "<<b<<" "<<c<<endl;
    int k=check(c)/2+1;
    long long m=pow(10,k);
    a=a%m;
    b=b%m;
    outfile<<((a%c*b%c)%c)<<endl;
}
}
