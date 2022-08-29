#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");
int main(){
int a;
srand(time(0));
int k=10;
while(k-->0){
        a=rand()%999 +2;
        infile<<a<<endl;
        long int l=2;
    bool c[a+1]={false};
    for(long int i=2;i<=sqrt(a);i++)
        if(c[i]!=true) {
            for(long int j=2*i;j<=a;j=j+i)
                if(c[j]!=true)c[j]=true;
        }
    while( a!=1){
        for(long int i=l;i<=a;i++){
            if(c[i]!=true&&a%i==0){
                outfile<<i<<" ";
                l=i;
                a/=i;
                break;
    }}}
    outfile<<endl;

}
}

