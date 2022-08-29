#include<bits/stdc++.h>
using namespace std;
vector<int>v;
set<int>s;
int ans=0;
bool check[100005];
int main(){
    ifstream f;
    f.open("looking.in");
    int n,k,z, t;
    f>>t;
    while(t--){

        f>>n>>k;
        for(int i=0; i<n ;i++)check[i]=false;
        for (int i=0; i<n; i++){
            f>>z;
            s.insert(z);
        }
        for(auto x:s)v.push_back(x);
        sort(v.rbegin(), v.rend());
        int m=19;
        for(int i=0; i<k ;i++){
            if (m<0)break;
            while((ans& (1<<m)))m--;
            for(int i=0; i<v.size(); i++){
                if(check[i])continue;
                if(v[i]&(1<<m)){
                    ans = ans|(v[i]);
                    check[i]=true;
                    break;
                }
            }
            //cout<<ans<<" "<<m<<endl;
            m--;
        }
        cout<<ans<<endl;
        s.clear();
        v.clear();
        ans=0;
    }
}
