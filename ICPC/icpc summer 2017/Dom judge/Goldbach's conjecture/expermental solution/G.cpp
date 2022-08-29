#include<bits/stdc++.h>
using namespace std;
ofstream infile("f.in");
ofstream outfile("f.out");
int a;
bool c[100001];
void mark(int x , bool c[]){
for( int i=2*x;i<=a;i=i+x)
    if(c[i]!=true)c[i]=true;
}
int main(){
   srand(time(0));
    int k=1000;
    while(k-->0){
    a=rand()%99997+4;

    infile<<a<<endl;
    for(int i=2;i<=sqrt(a);i++)
    if(c[i]!=true) mark(i,c);
    for(int i=a/2;i<a-1;i++)
    {
        if(c[i]!=true&&c[a-i]!=true)
        {
            outfile<<a-i<<" "<<i<<endl;
            break;
    }

}
    }
}



