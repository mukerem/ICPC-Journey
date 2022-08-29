#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
    cin>>n;
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
    cout<<sum+n<<endl;
}

