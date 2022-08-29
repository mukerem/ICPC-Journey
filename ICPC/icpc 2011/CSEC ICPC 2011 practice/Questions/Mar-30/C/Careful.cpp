#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll f (ll a, ll b, ll m) {
    if(b == 1) {
        return a % m;
    }else if(b % 2 == 1) {
        return (f(a, b-1, m) + a) % m;
    }else {
        return (f(a, b/2, m) * 2) % m;
    }
}
int main()
{
    ofstream out("secrt/c.out");
    ofstream ou("secre/c.ans");
    ll a, b, m;
    while (1) {
        cin >> a; if(!(a+1)) break; cin >> b >> m;  
        cout << f(a,b,m) << endl;
        
    }

}
