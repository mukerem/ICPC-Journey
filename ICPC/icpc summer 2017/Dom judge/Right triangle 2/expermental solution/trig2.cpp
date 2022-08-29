#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
double a,b;
srand(time(0));
int k=1000;
while(k-->0){
a=rand()%99+1;
b=rand()%10+1;
infile<<a<<" "<<b<<endl;
        a=a*(M_PI)/180.0;
    outfile<<fixed<<setprecision(5)<<b*cos(a)<<" "<<b*sin(a)<<endl;
}
}

