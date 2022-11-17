// Time: 2019-11-17 13:54:17
// title: Cracking RSA
// language: C++



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime[1050];
vector<int>prr;
void seive(){
    prime[0]=prime[1]=true;
    for(int i=2; i<=32; i++){
        if(prime[i])continue;
        for(int j=i+i; j<=1000; j += i)prime[j]=true;
    }

}
int main(){
    seive();
    for(int i=2; i<=1000; i++){
        if(!prime[i])
            prr.push_back(i);
    }

    ll n,e,t,d,p,q,r;
    cin>>t;
    while(t--){
        cin>>n>>e;
        for(auto v: prr){
            if(n%v == 0){
                p = v;
                q = n/p;
                break;
            }
        }
        //cout<<p<<" "<<q<<endl;
        r = (p-1) * (q-1);
        for(ll d=1; d<r; d++){
            if((d*e) %r == 1){
                cout<<d<<endl;
                break;
            }
        }
    }
}
