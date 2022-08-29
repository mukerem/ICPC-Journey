#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
long int a=1000;
//bool c[10000001];
  vector <bool> c;
void mark(long int x){
for(long int i=2*x;i<=a/2;i=i+x)
    if(c[i]!=true)c[i]=true;

}
int main(){

        for(int i=0;i<=a/2;i++)
        c.push_back(false);
for(long int i=2;i<=sqrt(a/2);i++)
    if(c[i]!=true) mark(i);
for(long int i=2;i<=a/2;i++){
    if(c[i]!=true)cout<<i<<" ";

}
}

