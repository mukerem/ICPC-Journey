#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
double a;
srand(time(0));
int k=5;
while(k-->0){
a=rand()%10+1;
infile<<a<<" "<<endl;
        for(int i=0;i<a;i++){
                 for(int k=a-1;k>i;k--)
                 outfile<<".";
                    for(int k=0;k<=2*i;k++)
                    outfile<<"?";
                     for(int k=a-1;k>i;k--)
                 outfile<<".";
                 outfile<<endl;
            }

        }

}


