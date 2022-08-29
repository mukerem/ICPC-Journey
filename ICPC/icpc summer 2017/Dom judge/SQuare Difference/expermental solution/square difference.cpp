#include<bits/stdc++.h>
using namespace std;
long long n,a,b;
bool pri;
ofstream infile("c.in");
ofstream outfile("c.out");
#define MAX 99999999980
int main(){
n = 5;
infile<<n<<endl;
for(int i=0;i<n;i++){
    pri = true;
    a = ((long long)rand() * (long long)rand() * (long long)rand())% MAX +15;
    b = a - 1;
    infile<<a<<" "<<b<<endl;
    if(a != b+1){
        outfile<<"NO"<<endl;
        pri = false;
    }
    else{
        long long c=a+b;
        for(long long k=2;k*k<=c;k++){

            if(c%k == 0){
            outfile<<"NO"<<endl;
            pri = false;
            break;
            }
        }
        if(pri)
        outfile<<"YES"<<endl;
    }
}
return 0;
}



