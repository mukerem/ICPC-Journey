#include<bits/stdc++.h>
using namespace std;
long long k,num = 1000000;
int remainder(bool even, long long n){
    int div=0;
    if (even && n > 1){
         n = ceil(n/2.0);
        div++;
    }
    while(true){
        if (n == 1)break;
        n = floor(n/2.0);
        div++;
        if (n == 1)break;
        n = ceil(n/2.0);
        div++;
    }
    int last = 1;
    int times=div;
    if(even && times%2 == 1 || !even && times%2 == 0){
        if(!times--){
        last = (last*2)-1;
        //cout<<last<<" @ "<<times<<endl;
        }
    }
      while(true){
        if(!times--)break;
        last = last*2;
        //cout<<last<<" "<<times<<endl;
        if(!times--)break;
        last = last*2-1;
        //cout<<last<<" "<<times<<endl;
    }
    return last;
}
int main(){
    int result1 = remainder(0, num);
    int result2 = remainder(1, num);
cout<<result1 + result2;
}

