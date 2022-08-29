#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");
int main(){
long long  a;
srand(time(0));
int k=1000;
while(k-- >0){
    a=rand()%999999+2;
    infile<<a<<endl;
        bool b=true;
for(long long  i=2;i*i<=a;i++){
    if(a%i==0){
        outfile<<a<<" is COMPOSITE TT"<<endl;
        b=false;
         break;
    }
}
if(b)outfile<<a<<" is PRIME!!"<<endl;
}
}

