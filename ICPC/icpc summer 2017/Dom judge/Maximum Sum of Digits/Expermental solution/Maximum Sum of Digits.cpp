#include<bits/stdc++.h>
using namespace std;
long long n;
ofstream infile("d.in");
ofstream outfile("d.out");
int main(){
     n=((long long )rand()*(long long )rand()*(long long )rand())%1000000000000+1;
     infile <<n<<endl;
    int sum=0;
    bool borrow = 0;
    while(n>=10){
        int k = n%10;
        n = n/10;
        if(k != 9){
            n--;
            borrow = 1;
        }
        else borrow = 0;
        sum += k;
        if(borrow) sum += 10;
    }
    outfile<<sum+n<<endl;
}

