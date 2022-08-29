#include<iostream>
using namespace std;
long long a,k,b[100000];
int main(){

while(cin>>a&&a!=-1&&cin>>k){
    for(int i=0;i<a;i++)cin>>b[i];
    unsigned long long sum=0,minn=0;
      for(int i=0;i<k;i++)
            sum+=b[i];
            minn=sum;
    for(int i=0;i<a-k;i++){
                sum=sum+b[k+i]-b[i];
    if(minn<sum)minn=sum;
    }

cout<<minn<<endl;

}
}


