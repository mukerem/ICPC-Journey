#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll > v;
set<ll>s;
map<ll, ll> mp;
const int MOD = 1000000007;
ll power(ll r, ll n){
    if(n == 0) return 1;
    else if(n&1) return (power(r, n-1) * r )%MOD;
    else{
        ll v = power(r, n/2);
        return (v*v)%MOD;
    }
}
int main()
{
    //time_t start_time, finish_time;
	//start_time = time(NULL);
    ll n, a,b,c,d,q, f,x,y,z,w, start;
    while(cin>>a && a!= -1)
    {
        cin>>b>>c>>d;
        d = power(2, d);
        cin>>q;
        f = q;
        while(f--)
        {
            cin>>n;
            v.push_back(n);
            s.insert(n);
        }
        x = 1;
        y = 0;
        z = 0;
        w= 1;
        start = 1;
        //for(auto u: s)cout<<u<<" ";cout<<endl;
        for(auto u: s)
        {
            if(u<0)
                w = 0;
            else
                for(;start<=u ; start++)
                {
                    w = (a * x + b * y+ c * z + d) % MOD;
                    z = y; y = x; x = w;
                    //cout<<"***"<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
                }
            mp[u] = w;
            //cout<<u<<" "<<w<<endl;
        }
        for(auto u: v)cout<<mp[u]<<endl;
        v.clear();
        s.clear();
        mp.clear();

    }
    	//finish_time = time(NULL);
    	//cout<<"***"<<finish_time - start_time<<endl;

}
