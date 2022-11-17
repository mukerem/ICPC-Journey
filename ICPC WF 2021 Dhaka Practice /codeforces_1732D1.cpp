#include<bits/stdc++.h>
using namespace std;
int main(){
    map<long long, bool>m;
    map<long long, long long>v;
    map<long long, vector<long long>>u;
    char c;
    vector<long long> h, r;

    long long n, k;
    long long q, x;
    cin>>n;
    while(n--){
        cin>>c>>x;
        if(c == '+'){
           m[x]=true;
           if(u.find(x) == u.end()){continue;}
           if(u[x].size() == 0)continue;

           for (auto z:u[x]){
                 long long d = x + z;
                 while(m[d] == true)d += z;
                 v[z] = d;
                 if(u.find(d) == u.end()){
                     h = {z};
                     u[d] = h;
                 }
                 else{
                     u[d].push_back(z);
                 }

           }
           r = {};
           u[x] = r;

        }
        else{
        k = x;
        if(v[x]){cout<<v[x]<<endl;continue;}
            while(true){
               if(m[k] == false){cout<<k<<endl;break;}
               k += x;
            }

            v[x] = k;
            if(u.find(k) == u.end()){
                  h = {x};
                  u[k] = h;
             }
             else{
                 u[k].push_back(x);
             }
        }
    }
}
