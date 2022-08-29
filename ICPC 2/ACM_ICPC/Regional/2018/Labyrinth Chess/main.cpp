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

using namespace std;
typedef pair<int, int> pii;

multimap<int, int> ma;
int n, m, r, c, bi, bj;
string s[110];
bool vi[110][110];

void king(int i, int j) {
    if(i >= 0 && j >= 0 && i < n && j < m) {
        if(vi[i][j]) {
            ma.insert(mp(i, j));
            vi[i][j] =0;
        }

    }
}

void knight(int i, int j) {
    if(i >= 0 && j >= 0 && i < n && j < m) {
        if(vi[i][j]) {
            ma.insert(mp(i, j));
            vi[i][j] =0;
        }

    }
}

int main() {
    while (1) {

        cin >> n;
        if(!(n+1)) break;
        cin >> m >> r >> c;
        rep(i, n) cin >> s[i];

        rep(i, n) {
            rep(j,m) {
                if (s[i][j] == 'B') {
                    bi =i;
                    bj =j;
                } else if(s[i][j]=='.')
                    vi[i][j] =1;
            }
        }

        /*rep(i, n) {
              rep(j,m) cout << vi[i][j] << " ";cout << endl;}
            for(auto i : ma) cout << i.fi.fi << " " << i.fi.se << endl;
            system("pause");*/
        ma.insert(mp(bi, bj));

        bool kin = 0;

        while(!ma.empty()) {
            auto x = ma.begin();
            if(x->fi == r-1 && x->se == c-1) {
                kin = 1;
                break;
            }

            king(x->fi, x->se-1);
            king(x->fi, x->se+1);
            king(x->fi-1, x->se);
            king(x->fi+1, x->se);
            king(x->fi-1, x->se-1);
            king(x->fi+1, x->se+1);
            king(x->fi-1, x->se+1);
            king(x->fi+1, x->se-1);

            ma.erase(x);
        }

        ma.clear();
        rep(i, n) {
            rep(j,m) {
                if (s[i][j] == '.') {
                    vi[i][j] =1;
                } else
                    vi[i][j] =0;
            }
        }

        ma.insert(mp(bi, bj));

        bool knig = 0;

        while(!ma.empty()) {
            auto x = ma.begin();
            if(x->fi == r-1 && x->se == c-1) {
                knig = 1;
                break;
            }

            king(x->fi-1, x->se-2);
            king(x->fi-1, x->se+2);
            king(x->fi+1, x->se-2);
            king(x->fi+1, x->se+2);
            king(x->fi-2, x->se-1);
            king(x->fi-2, x->se+1);
            king(x->fi+2, x->se-1);
            king(x->fi+2, x->se+1);

            ma.erase(x);
        }


        if(kin || knig) {
            if(kin && knig)
                cout << "BOTH" << endl;
            else if(kin)
                cout << "KING" << endl;
            else
                cout << "KNIGHT" << endl;
        } else
            cout << "NONE" << endl;


         ma.clear();
        rep(i, n) {
            rep(j,m) {
                    vi[i][j] =0;
            }
        }

    }
    return 0;
}
