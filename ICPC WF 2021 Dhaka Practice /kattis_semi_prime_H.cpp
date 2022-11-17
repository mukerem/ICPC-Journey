#include<bits/stdc++.h>
using namespace std;
#define M 250005
bool a[M];
vector<long long>prime, p;
set<long long>s;
int main(){
    a[0]=true;
    int q = 0, v;
    for(int i=1; i*i<= M; i++){
        q++;
        if (a[i])continue;
        v = 4*i+1;
        for(int j=v+q; j<M; j+=v)a[j]=true;
    }
    for(int i=1; i<M; i++)if(a[i] == false)prime.push_back(4*i+1);
    q = prime.size();
    //q = 10;
    for(int i=0; i<q; i++){
        for(int j=i; j<q; j++){
            if(prime[i]*prime[j] > 1000001)break;
            v = (prime[i]) * (prime[j]);
            s.insert(v);
            //cout<<prime[i]<<" "<<prime[j]<<" "<<v<<endl;
        }
    }
    for(auto u: s)p.push_back(u);
    //sort(p.begin(), p.end());
    //for(int i=0; i<64; i++)cout<<p[i]<<" ";
    int n, c;
    while(cin>>n&&n){
        auto u = upper_bound(p.begin(), p.end(), n);
        //u--;
        c = u - p.begin();
        cout<<n<<" "<<c<<endl;
    }
}
