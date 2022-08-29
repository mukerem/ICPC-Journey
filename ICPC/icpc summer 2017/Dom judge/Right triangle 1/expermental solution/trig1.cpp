#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
long long a,b;
srand(time(0));
int k=10;
while(k-->0){
b=rand()%10+2;
a=rand()%(b-1)+1;
infile<<a<<" "<<b<<endl;
    outfile<<fixed<<setprecision(5)<<sqrt(b*b-a*a)<<endl;

}
}
