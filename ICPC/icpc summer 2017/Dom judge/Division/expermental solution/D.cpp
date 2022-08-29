#include<bits/stdc++.h>
using namespace std;
ofstream infile("f.in");
ofstream outfile("f.out");
int main(){
int a,b;
int c;
srand(time(0));
    int k=1000;
    while(k-->0){
    b=rand()%1000000+1;
    a=rand()%(b-1)+1;
    c=rand()%100+1;
    infile<<a<<" "<<b<<" "<<c<<endl;
        outfile<<0<<".";
    for(int i=0;i<c;i++)
    {
    a=a*10;
    outfile<<a/b;
    a=a%b;
}
outfile<<endl;
}
}


