#include<bits/stdc++.h>
using namespace std;
long long k, n;
map<int,int> base;
int main(){
    cin>>n>>k;
    cout<<k/n + (k%n == 0? 0:1)<<endl;
}

