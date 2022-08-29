#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
long long a;
srand(time(0));
int k=10;
while(k-->0){
a=rand()%10+1;
infile<<a<<endl;
bool c=true,check=true;
long long b[a][2],k;
for(int i=0;i<a;i++){
        long long x=rand()%RAND_MAX-RAND_MAX/2;
        b[i][1]=x;
        b[i][0]=x-rand()%RAND_MAX;
        infile<<b[i][0]<<" "<<b[i][1]<<endl;
if(b[i][1]>=0&&b[i][0]<=0){
   check=false;
}
else if(check){
    if(b[i][0]<0||b[i][1]<0){
        k=b[i][1]-b[i][0]+1;
        if(k%2==1&&c==true)c=false;
        else if(k%2==1&&c==false)c=true;
    }
}
}
if(!check)outfile<<0<<endl;
else if(c==true)outfile<<"+"<<endl;
else outfile<<"-"<<endl;
}}


