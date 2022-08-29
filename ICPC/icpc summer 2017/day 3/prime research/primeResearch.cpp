#include<iostream>
#include<cmath>

#include<fstream>
using namespace std;
long int k=1000;
bool c[1001];
void mark(long int x){
for(long int i=2*x;i<=k;i=i+x)
    if(c[i]!=true)c[i]=true;

}
int main(){
    int i=7;
    string a="prime2.txt";
    ofstream b;
    b.open(a.c_str());
while(i<1000){
    if((i%10==1||i%10==3||i%10==7||i%10==9)){
        if(i%3!=0)b<<i<<"  ";
    }
    i++;
} b<<endl;
for(long int i=2;i<=sqrt(k);i++)
    if(c[i]!=true) mark(i);
for(long int i=2;i<=k;i++){
    if(c[i]!=true)b<<i<<"  ";

}
b<<endl;
i=7;
while(i<1000){
    if((i%10==1||i%10==3||i%10==7||i%10==9)){
        if(i%3!=0&&c[i]==true)b<<i<<"  ";
    }
    i++;
} b<<endl;

}


