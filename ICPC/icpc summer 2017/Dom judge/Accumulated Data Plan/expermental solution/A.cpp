#include<bits/stdc++.h>
using namespace std;
ofstream infile("f.in");
ofstream outfile("f.out");
long long a,b,c[100000],total;
int main(){
int k=8;
    srand(time(0));
while(k-->0){
        a=rand()%10000+1;
        b=rand()%20000+1;
        infile<<a<<" "<<b<<endl;
        total=0;
        for(int i=0;i<a;i++){
                int x=(i+1)*b-total;
            c[i]=rand()%x;
            infile<<c[i]<<" ";
            total+=c[i];
        }
        infile<<endl;
    outfile<<(a+1)*b-total<<endl;
}
}
