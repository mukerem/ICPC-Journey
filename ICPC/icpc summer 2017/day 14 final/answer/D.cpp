#include<iostream>
#include<algorithm>
using namespace std;
long long a,q,p,b[100000];
long long per(int x,int y){
    long long sum=1,sum2=1;
    for(int i=x-y+1;i<=x;i++)
        sum*=i;
    for(int i=2;i<=y;i++)
        sum2*=i;
        return sum/sum2;
}
int main(){

while(cin>>a&&a!=-1&&cin>>p>>q){
        bool check=true;
    for(int i=0;i<a;i++)

    {cin>>b[i];
     long long m=b[0];
     if(b[i]!=m)check=false;
    }
    sort(b,b+a);

    double sum=0,minn=1;
      for(int i=a-p;i<a;i++)
            sum+=b[i];
    for(int i=a-p-1;i>=0;i--){
    if(b[i]==b[a-p])minn++;
    else break;
    }
if(check)
minn=per(a,p)+per(a,q);
cout<<sum/p<<" "<<minn<<endl;

}
}


