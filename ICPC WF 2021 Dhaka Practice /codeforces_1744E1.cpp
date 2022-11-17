#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,c,d,x,y,i,z,g,j,u,v;
    cin>>a>>b>>c>>d;
    z = a*b;
    for(i=a+1; i<=c; i++){
        g = __gcd(i, z);
        x = i/g;
        y = z/g;
        if(b/y < d/y){
            //u =d/y;
            //cout<<x<<" "<<y<<" "<<g<<" "<<u<<endl;
            cout<<i<<" "<<d/y*y<<endl;
            return;
        }
    }
    cout<<-1<<" "<<-1<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}

/*

#include "bits/stdc++.h"
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds; //*find_by_order(k):
// template<class T> // order_of_key(k)
// using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template<class T> // use pair
// using omset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long
#define ld long double
#define int ll
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define ppb pop_back
#define ins insert
#define pll pair<ll,ll>
#define ff first
#define ss second
#define fr0(va,st) for(int va=0;va<st;va++)
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define all(xxx90) (xxx90).begin(),(xxx90).end()
#define allr(xxx90) (xxx90).rbegin(),(xxx90).rend()
#define umap unordered_map
#define mset multiset
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#ifdef LOCAL
#define err(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename val1>void __f(const char* name, val1&& value) { cerr << name << " = " << value << "\n"; }
template <typename val1, typename... values>void __f( const char* names, val1&& value, values&&... multiplevalue) {const char* comma = strchr( names + 1, ','); cerr.write(names, comma - names) << " = " << value << " "; __f(comma + 1, multiplevalue...); }
#else
#define err(...)
#endif
template<class T> using mxpq = priority_queue<T>;
template<class T> using mnpq = priority_queue<T, vector<T>, greater<T>>;
int setbits(int x){return  __builtin_popcountll(x);}
template<class T>T getsum(vector<T> &ar){return accumulate(ar.begin(),ar.end(),(T)0);}
template<class T> void out(T a){cout<<a<<"\n";}
template<class T>void inp(vector<T> &ar){for(auto &i:ar) cin>>i;}
template<class T>void inp(vector<vector<T>> &ar){for(auto &i:ar) inp(i);}
template<class T>void out(vector<T> &ar){for(auto &i:ar) cout<<i<<" ";cout<<"\n";}
template<class T>void out(vector<vector<T>> &ar){for(auto &i:ar) out(i);}
template<class T,class L>void out(vector<pair<T,L>> &ar){for(auto &i:ar) cout<<i.ff<<" ",out(i.ss);}
int gcd(int a,int b){ return __gcd(a,b);}
int lcm(int a,int b){ return ((a/__gcd(a,b))*b);}
ll power(ll x, ll y){ ll res = 1ll; while (y > 0ll) { if (y & 1ll)res = res * x; y = y >> 1ll; x = x * x;}return res;}
ll power_mod(ll x, ll y,ll mod){ ll res = 1ll; while (y > 0ll) { if (y & 1ll) res = (res*x)%mod; y = y >> 1ll; x = (x*x)%mod;}return res;}
vector<int> prime;
void getprime(int N){
    vector<int> lp(N+1);
    for (int i=2; i<=N;i++) {
    if (lp[i]==0) {
            lp[i]=i;
            prime.push_back(i);
        }
        for (int j=0; j <(int)prime.size() && prime[j] <= lp[i] && i*prime[j] <= N; ++j) {
            lp[i * prime[j]] = prime[j];
        }
    }
}
ll test=1;
const ll mod=1000000007;
const ll inf = 1e18;
const ll mod2=998244353;
const ld pi = 3.14159265358979323846;

void test_case(){
                    cin>>test;

}


int count(int x){
    int c=0;
    while(x%2==0){
        x/=2;
        c++;
    }
    return c;
}

void solve(){

     int n;
     cin>>n;

     vi ar;
     int ttl = 0;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int t = count(x);
        ttl+=t;
        ar.pb(count(x*(i+1)) - t);
     }
     sort(allr(ar));
     int ans = 0;
     for(int i:ar){
        if(ttl>=n) break;
        ttl+=i;
        ans++;
     }
     if(ttl < n) ans = -1;
     out(ans);


return;}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cout<<setprecision(12)<<fixed;
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
test_case();
ll koko=1;
while(koko<=test){
                       // cout<<"Case #"<<koko<<": ";
solve();
                    // cout<<"\n";

koko++;
}return 0;}

*/
