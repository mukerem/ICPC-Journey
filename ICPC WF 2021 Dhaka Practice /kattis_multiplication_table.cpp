#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, i=1, j, a=0;
    cin>>n>>m;
    //vector<long long> v;
    for(; i*i<m; i++){
        if(m%i == 0){
            j = m / i;
            if(i <= n && j <= n)a += 2;
        }
    }
    if(i*i == m){
        if(i <= n)a++;
    }

    cout<<a;
}
