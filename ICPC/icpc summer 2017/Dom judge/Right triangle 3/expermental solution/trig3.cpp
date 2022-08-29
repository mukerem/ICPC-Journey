#include<bits/stdc++.h>
using namespace std;
ofstream infile("f.in");
ofstream outfile("f.out");

int main(){
int a,b;
srand(time(0));
int k=5000;
while(k-->0){
b=rand()%99+2;
a=rand()%(b-1)+1;
infile<<a<<" "<<b<<endl;
    outfile<<fixed<<setprecision(5)<<180*acos(double(a)/b)/3.1415926535<<endl;
}
}


