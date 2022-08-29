#include<bits/stdc++.h>
using namespace std;
ofstream infile("e.in");
ofstream outfile("e.out");

int main(){
double a;
srand(time(0));
int k=50;
while(k-->0){
a=rand()%100+1;
infile<<a<<" "<<endl;
        for(int i=0;i<a;i++){
            for(int j=0;j<=i;j++)
                outfile<<"\\";
            outfile<<endl;
        }

}
}

