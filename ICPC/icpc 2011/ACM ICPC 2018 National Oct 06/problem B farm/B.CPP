#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, x, n) for(int i = x; i <= n; i++)
#define fi first
#define se second
#define sz(n) n.size()
#define mp make_pair
#define all(x) (x).bein(), (x).end()
#define itt map<ll, ll>::iterator



using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<ll, ll> mll;


int main()
{
    ll a, b, n, w;
    ll sheep, goat;
    ll y, x;

    cin >> a >> b >> n >> w;


    if(a == b){
            if (n>2){
                cout << -1;
            return 0;
            }
        if(n *a != w){
            cout << -1;
            return 0;
        }
        else{
            cout << n / 2 << " " << n / 2;
            return 0;
        }
    }
    y = (w - (b * n)) / (a-b);
    x = (a*n -w) / (a-b);
    if( x < 0 || y < 0) {
        cout << -1;
        return 0;
    }

    if( x == 0 || y == 0){
        cout << -1;
        return 0;
    }
    if (abs(a*n -w) % abs(a-b) !=0) {
        cout << -1;
        return 0;
    }
    if (abs(a*n -w) % abs(a-b)){
        cout << -1;
        return 0;
    }
    cout << y << " " << x;

    return 0;
}

