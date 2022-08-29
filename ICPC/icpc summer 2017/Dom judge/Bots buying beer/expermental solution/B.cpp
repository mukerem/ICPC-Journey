#include<bits/stdc++.h>
using namespace std;
ofstream infile("b.in");
ofstream outfile("b.out");
unsigned long long c[100000],maxx,total,ans;
int a,b;
void check(){
maxx=0;
int l=b<=a?0:b-a;
for(int i=b-1;i>=l;i--){
    total=((b-i)*c[i]);
    if(maxx<=total){
        maxx=total;
        ans=c[i];
    }
}
outfile<<ans<<" "<<maxx<<endl;
}
int main(){
    srand(time(0));
    int k=8;
while(k-->0){
    a=rand()%1000+1;
    b=rand()%1000+1;
    infile<<a<<" "<<b<<endl;
for(int i=0;i<b;i++){
        c[i]=rand()%1000000+1;
            infile<<c[i]<<" ";

}
infile<<endl;
sort(c,c+b);
check();
}
}


