
#include<iostream>
using namespace std;
int main(){
long long n,t;
cin>>t;
for(int i=0;i<t;i++){
    long long sum=0;
    cin>>n;
    long long k, c;
    k = n/2;
        c = k-1;
        sum = n*k*(k+1) -(c*(c+1) + (c*(c+1)*(2*c+1))/3);
    if (n%2 == 1){
        sum += (n/2+1)*(n-n/2);

    }
    else{

    }
//    for(long long i=1;i<=n;i++){
//        sum += i*k;
//        k--;
//    }

cout<<sum*sum<<endl;
}

}
