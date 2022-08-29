#include<bits/stdc++.h>
using namespace std;
ofstream infile("a.in");
ofstream outfile("a.out");

int main(){
string a;
srand(time(0));
int k=10;
while(k-->0){
a="";
int x=rand()%20+1;
for(int i=0;i<x;i++ ){
    int r=rand()%2;
    if (r==0) a+='O';
    else a+='X';
}
infile<<a<<endl;
int c=-1,sum=0,k;
for(int i=0;i<a.length();i++)
{

if(a[i]=='O')
{
c++;
if(a[i]=='X')k=0;
else k=1;
sum=sum+k+c;
}
else
{
if(c>=0)
c=-1;
}
}
outfile<<sum<<endl;
}

}



