#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int d[100000],m;
long long c[100000],e[100000];
long long a;
bool searcc(int x){
for(int i=0;i<m;i++){

    if(e[i]==x)return true;
}return false;
}
int searchindex(int x){
for(int i=0;i<a-1;i++){

    if(c[i]==x)return i;
}return -1;
}
void cal(int x){
    if(a==m)return;
    for(int i=0;i<a-1;i++){
        if(x==c[i]){
                if(searcc(i))
                continue;
        e[m]=i;
        m++;
        d[i]++;
        int k=searchindex(c[i]);
        return cal(k);
        }
    }
}
int main(){

while(cin>>a&&a!=-1){
for(int i=0;i<a-1;i++)
{
    cin>>c[i];
    d[i]=0;
}
m=0;
cal(a);
for(int i=0;i<a-1;i++){
    cout<<d[i]<<" ";
}
cout<<endl;

}

}


