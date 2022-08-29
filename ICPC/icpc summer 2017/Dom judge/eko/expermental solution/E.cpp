#include<bits/stdc++.h>
using namespace std;
long long total=0;
int c[1000000],a,b,m=0;
ofstream infile("e.in");
ofstream outfile("e.out");

void find(int x,int y){
    total=0;
    m=(x+y)/2;
    for(int i=a-1;i>=0;i--){
        if(c[i]>m)
        total=total+(c[i]-m);
          if(total>b){
                if(x==m){
                     outfile<<m<<endl;
                    break;
                }
                else return find(m,y);

          }
         else if(c[i]<m){
            if(total==b||x==m){
            outfile<<m<<endl;
            break;
        }
          return find(x,m);
         }
        if(i==0) return find(x,m);

    }

}
int main(){
    srand(time(0));
    int k=10;
while(k-->0){
    a=rand()%1000000+1;
    b=rand()%2000000000+1;
    infile<<a<<" "<<b<<endl;
for(int i=0;i<a;i++)   c[i]=rand()%1000000000+1;
for(int i=0;i<a;i++)  infile<< c[i]<<" ";
infile<<endl;

sort(c,c+a);
find(0,c[a-1]);
}

}

