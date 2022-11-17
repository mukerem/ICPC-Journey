#include<bits/stdc++.h>
using namespace std;
int maxx = 31625;
bool visited[31626];
vector<int>prime;
int main(){
    visited[0] = true;
    visited[1] = true;

    for(int i=2; i*i<=maxx; i++){
        if(visited[i]) continue;
        for(int j=i+i; j<= maxx; j += i)
            visited[j] = true;
    }
    for(int i=2; i<= maxx; i++)
        if(!visited[i])
            prime.push_back(i);
    int n;
    while (cin>>n && n>0){
        map<int, int>p;
        auto u = prime.begin();
        while(n > 1 and u != prime.end()){
            if(n% (*u) == 0){
             p[*u]+=1;
             n /= *u;
            }
            else u++;

        }
        if(n>1)p[n]+=1;
        int a = 1;
        for(auto u: p){
            a *= (pow(u.first, u.second - 1)) * (u.first - 1);
        }
        cout<<a<<endl;
    }
}
