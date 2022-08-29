#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
long long a;
 vector <bool> c;
void mark(long int x){
for(long int i=2*x;i<=a;i=i+x)
    if(c[i]!=true)c[i]=true;

}
int main(){

while(cin>>a&&a!=-1){
c.clear();
long long total=0,k,sum=1;
   for(int i=0;i<=a;i++)
        c.push_back(false);
for(long int i=2;i<=sqrt(a);i++)
    if(c[i]!=true) mark(i);

    if(a>=2){
    int i=2;
    k=1;
    while(a/pow(i,k)>=1){
            total+=a/pow(i,k++);

    }
    }
    sum=(sum*(total+1))%(1000000007);
    total=0;
    if(a>=3){
    int i=3;
    k=1;
    while(a/pow(i,k)>=1){
            total+=a/pow(i,k++);

    }
    }
    sum=(sum*(total+1))%(1000000007);
    total=0;
    int i;
    for( i=6;i<=a;i+=6){
            k=1;
        if(c[i-1]!=true){
          while(a/pow(i-1,k)>=1){
            total+=a/pow(i-1,k++);

    }
        }
    sum=(sum*(total+1))%(1000000007);
        total=0;
        k=1;
        if(c[i+1]!=true){
          while(a/pow(i+1,k)>=1){
            total+=a/pow(i+1,k++);

    }
    }
    sum=(sum*(total+1))%(1000000007);
    total=0;
        }
        if(a==i-1&&c[a]!=true){
    int i=a;
    k=1;
    while(a/pow(i,k)>=1){
            total+=a/pow(i,k++);

    }
    }
    sum=(sum*(total+1))%(1000000007);
        cout<<sum<<endl;
    }
    }





