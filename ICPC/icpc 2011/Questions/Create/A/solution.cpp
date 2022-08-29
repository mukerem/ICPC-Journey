#include <bits/stdc++.h>  

using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define re return
#define fi first
#define mp make_pair
#define se second
#define sz(a) (int)a.size()
#define prev previ
#define tm tmmm
#define div divv
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

const int ma = 1024 * 1024;
const ll mod = int(1e9) + 7;

int n;
int p[200001], cnt[200001], k[200001];

int main() {
	iostream::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	forn (i, n) {
		cin >> p[i];
		p[i]--;
		k[(i - p[i] + n) % n] = 1;
	}
	forn (i, n) {
		if (k[i] == 0) {
			cout << i << "\n";
			re 0;
		}
	}
	cout << -1 << "\n";
	
}