#include <bits/stdc++.h>

#define rep(i, n) for (int i=0; i<n; i++)
#define rev(i, n) for (int i=n-1; i>=0; i--)
#define FOR(i, l, r) for (int i=l; i<=r; i++)
#define re return
#define fi first
#define mp make_pair
#define se second
#define pb push_back
#define sz(a) a.size()
#define all(x) x.begin(), x.end()

#define VI vector<int>
#define VL vector<ll>
#define inf INT_MAX
#define INT LONG_LONG_MAX

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

const ll mod = int(1e9) + 7;
const ll siz = int(1e5);

set<int> N, P, K;
int ni[10], pi[10], ki[10], n, p, k, x, a, b, c;
int main()
{

    while(cin >> x && (x+1))
    {
        rep(i, x)cin >> ni[i] >> pi[i] >> ki[i];

        rep(i, x)
        {
            N.insert(ni[i]);
            P.insert(pi[i]);
            K.insert(ki[i]);
            FOR(j, i+1, x-1)
            {
                N.insert(ni[i]+ni[j]);
                P.insert(pi[i]+pi[j]);
                K.insert(ki[i]+ki[j]);
                FOR(l, j+1, x-1)
                {
                    N.insert(ni[i]+ni[j]+ni[l]);
                    P.insert(pi[i]+pi[j]+pi[l]);
                    K.insert(ki[i]+ki[j]+ki[l]);
                }
            }

        }

        a=0;b=0;c=0;
        rep(i, x) a +=ni[i], b +=pi[i], c +=ki[i];
        N.insert(a);
        P.insert(b);
        K.insert(c);

       /* for(i : N) cout << i << " "; cout << endl;
        for(i : P) cout << i << " "; cout << endl;
        for(i : K) cout << i << " "; cout << endl; system("pause");
*/
        cin >> n >> p >> k;

        for(i : N){
            if(!(i%n)){
                auto j =P.find((i/n)*p);
                auto m =K.find((i/n)*k);
                if(j != P.end() && m != K.end())
                {
                    cout << "yes" << endl;
                    goto botm;
                }

            }
        }

        cout << "no" << endl;

        botm:
        N.clear();P.clear();K.clear();

    }


    return 0;
}
