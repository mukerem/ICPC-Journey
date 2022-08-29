#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)
#define sz(n) n.size()
#define sc second
#define fi first

typedef long long ll;
typedef pair<ll, ll> pii;
typedef multimap<ll, pii> mll;
typedef multimap<ll, pii>::iterator tii;


int main()
{
    mll m;
    tii it;


    ll T, N, M, a, b, d;
    cin >> T;
    while(T--){

        cin >> N >> M;
        vector<bool> v(false);

        while(M--){
            cin>> a >> b >>d;
            pii p = make_pair(a,b);

            m.insert(make_pair(d,p));
        }
        ll ans = 0;
        int ce =1;
        cout << "Case #" << ce++ <<": ";
        if(N == 1) cout << 0 << endl;
        else{
            it = m.begin();
            ans += it->fi;
            v[it->sc.fi] =true; v[it->sc.sc] =true;
            m.erase(it);
            it = m.begin();
            int c=2;

            while(it != m.end()){

                if((v[it->sc.fi] && !v[it->sc.sc]) || (!v[it->sc.fi] && v[it->sc.sc])){
                    ans += it->fi;
                    if(v[it->sc.sc]) v[it->sc.fi] = true;
                    else v[it->sc.sc] = true;

                    m.erase(it);
                    it = m.begin();
                    c++;

                }else it++;


                if(c == N) break;
            }


            cout << ans<< " meters"<<endl;;

        }
        m.clear();
    }

    return 0;
}
