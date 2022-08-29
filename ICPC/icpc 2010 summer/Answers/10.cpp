#include<bits/stdc++.h>

using namespace std;
ofstream out("a.out");
long int a=1000000;
bool c[10000001];
 // vector <bool> c;
void mark(long int x){
for(long int i=2*x;i<=a;i=i+x)
    c[i]=true;

}
int main(){
        for(int i=0;i<=a;i++)
        c[i]=false;
for(long int i=2;i<=sqrt(a);i++)
    if(c[i]!=true) mark(i);
for(long int i=2;i<=a;i++){
    if(c[i]!=true)cout<<i<<" ";

}
}

