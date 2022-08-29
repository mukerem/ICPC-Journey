#include<iostream>
#include<cmath>
bool relatively_prime(int a, int b , int c){
    for(int i = 2;i<=a;i++){
        if (a%i == 0){
            if(b % i ==0)return false;
            if(c % i == 0)return false;
        }
        else{
            if(b%i == 0 && c% i == 0) return false;
        }
    }
    for(int i =a+1;i<=b;i++){
        if(b%i == 0 && c% i == 0) return false;
    }
    return true;
}
using namespace std;
int main(){
    int k;
    cin>>k;
for (int i=3;i<=k;i++){
    for(int j=i+1;j<=k;j++){
        int x= i*i +j*j;
        double n = sqrt(x);
        if (n - int(n) == 0 && n<=k) {
                if (relatively_prime(i,j,int(n)))
                cout<<i<<" "<<j<<" "<<int(n)<<endl;
        }
    }
}
}
