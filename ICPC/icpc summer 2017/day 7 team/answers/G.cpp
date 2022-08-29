#include<iostream>
#include<cmath>
using namespace std;
int a;
bool c[100001];
void mark(int x , bool c[]){
for( int i=2*x;i<=a;i=i+x)
    if(c[i]!=true)c[i]=true;
}
int main(){
    while(cin>>a&&a!=-1){
    for(int i=2;i<=sqrt(a);i++)
    if(c[i]!=true) mark(i,c);
    for(int i=a/2;i<a-1;i++)
    {
        if(c[i]!=true&&c[a-i]!=true)
        {
            cout<<a-i<<" "<<i<<endl;
            break;
    }

}
    }
}



