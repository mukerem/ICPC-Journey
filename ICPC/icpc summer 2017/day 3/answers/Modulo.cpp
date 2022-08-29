#include<bits/stdc++.h>

using namespace std;
int main(){
int a,b,c;
srand(time(0));
int x=1000;
ofstream infile("c.in");
ofstream outfile("c.out");
while(x-- >0){
    a=rand()%1000000+1;
    b=rand()%1000000+1;
    c=rand()%1000000+1;
    infile<<a<<" "<<b<<" "<<c<<endl;
    long int x=a-b;
    outfile<<(a%c+b%c)%c<<" "<<(long long)(x%c+c)%c<<" "<<((long long)a%c*b%c)%c<<endl;
}
}
