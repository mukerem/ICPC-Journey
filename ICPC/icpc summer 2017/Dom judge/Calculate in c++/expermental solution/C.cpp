#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
int a,b;
srand(time(0));
int k=10;
while(k-->0){
a=rand()%32768+1;
b=rand()%32768+1;
infile<<a<<" "<<b<<endl;
       outfile<<a<<" + "<<b<<" = "<<a+b<<endl;
        outfile<<a<<" - "<<b<<" = "<<a-b<<endl;
       outfile<<a<<" / "<<b<<" = "<<a/b<<endl;
       outfile<<a<<" % "<<b<<" = "<<a%b<<endl;

        }

}



