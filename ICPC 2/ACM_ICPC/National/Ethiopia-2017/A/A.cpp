#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

typedef long long ll;
#define pll pair<ll,ll>
#define fi first
#define se second

vector<ll>p,q;
map<ll,ll> s;
vector<ll>::iterator it;
map<ll,ll>::iterator im;

int main()
{

    ll a[100000000];
    ll n,m,c1,c2, x;
    cin>>n>>m>>c1>>c2;


    rep (i, n)
    {
        cin>>x;
        p.push_back(x);

    }
    rep (i, m)
    {
        cin>>x;
        q.push_back(x);
    }
    sort(p.begin(),p.end());
    sort(q.begin(),q.end());

    rep(i,n){

        if(p[i] < q[m-1]){
            it = upper_bound (q.begin(), q.end(), p[i]);
            int c =it-q.begin();

            ll k=abs(p[i]-q[c])+abs(c1-c2);
            s[k]++;

            if(c > 0){
                k=abs(p[i]-q[c-1])+abs(c1-c2);
                s[k]++;
            }

        }else{
            ll k=abs(p[i]-q[m-1])+abs(c1-c2);
            s[k]++;
            break;
        }
    }

    im =s.begin();

    cout<<im->fi<<" "<<im->se<<endl;

    return 0;
}
