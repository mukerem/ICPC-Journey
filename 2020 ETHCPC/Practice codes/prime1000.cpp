#include<bits/stdc++.h>
using namespace std;
int N = 1000000;
bool prime[1000000];
int main(){
    int x = sqrt(N);
    for(int i = 2; i<= x; i++){
        if(prime[i])continue;
        for(int j = 2*i; j<=N; j+=i){
            prime[j] = true;
        }
    }
    for(int i=2; i<= N; i++){
        if(!prime[i])cout<<i<<" ";
    }
}