#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);

    long long n, k, q, t, r, s;
    string m;
    set<pair<long long, string>> v;
    map<string, long long>p;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>q;
        if(q == 1){
            cin>>t>>m>>s;
            r = k*t - s;
            v.insert({r, m});
            p[m] = r;
        }
        else if(q == 2){
            cin>>t;
            if (v.size() == 0) cout<<"doctor takes a break\n";
            else{
                cout<<v.begin()->second<<endl;
                v.erase(v.begin());
            }
        }
        else{
            cin>>t>>m;
            if(p[m] == 0)
            continue;
            auto f = v.find({p[m], m});
            if (f != v.end())v.erase(f);
            //p.remove(m);
        }
    }
}
