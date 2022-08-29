#include<bits/stdc++.h>
using namespace std;
ofstream infile("z.in");
ofstream outfile("z.out");

int main(){
int a;
srand(time(0));
int k=10;
while(k-->0){
a=rand()%10+3;
infile<<a<<endl;
       int i;
       outfile<<setw(a);
        outfile<<"."<<endl;
        for( i=0;i<a-2;i++){
            outfile<<setw(a-i-1);
                    outfile<<"/";

                 outfile<<setw(i+1);
                    outfile<<"|"<<endl;

            }
        outfile<<"/";
                 for(int k=0;k<i;k++)
                 outfile<<"_";
                    outfile<<"|"<<endl;
        }

}


