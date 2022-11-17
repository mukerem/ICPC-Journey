// Time: 2021-09-20 18:05:31
// title: Prime Reduction
// language: C++


#include<bits/stdc++.h>
using namespace std;

bool p[31625];
vector<int> prime;
void seive(){

    for(int i=2; i*i<31625; i++){
        if(p[i]) continue;
        for(int j=2*i; j<31625; j+=i)
            p[j] = true;
    }
    for(int i=2; i<31625; i++)
        if(!p[i]) prime.push_back(i);
}
bool is_prime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i ==0) return false;
    }
    return true;
}

vector<int> factorization(int n){
    vector<int> v;
    for(auto i: prime){
        while(n%i == 0){
            n /= i;
            v.push_back(i);
        }
        if(n == 1)break;
    }
    if(n>1) v.push_back(n);
    return v;
}
int main(){
    seive();
    int n, s;
    while(true){
        cin>>n;
        if(n==4)break;
        int c=1;
        while(!is_prime(n)){
            s = 0;
            vector<int> v = factorization(n);
            for(auto u: v) s += u;
            n = s;
            c += 1;
        }
        cout<<n<<" "<<c<<endl;
    }
}
