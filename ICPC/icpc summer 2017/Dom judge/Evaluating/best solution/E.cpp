
#include<iostream>
using namespace std;
int main(){
string a;
while(cin>>a&&a!="-1"){
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
cout<<sum<<endl;
}

}



