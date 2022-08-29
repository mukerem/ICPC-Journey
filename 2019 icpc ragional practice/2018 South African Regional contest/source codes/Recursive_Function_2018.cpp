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

ll arr[600];
ll temp[600];
ll m = 1000000007, ans;

map<ll, ll> Map;

ll modu(ll x, ll y){
      return ((x % m) * (y % m)) % m;
}


ll powr( ll r){
/*
   if(r == 0) return 1;
   ll temp = powr( r / 2);
   ans = ((temp % m) * (temp % m) % m);
   if(r & 1) ans = (2 * (ans % m)) % m;
   return ans;
   */
   if(r==0)return 1;
   else if(r%2 == 0){
    ll v = powr(r/2)%m;
        return (v*v)%m;

   }
   else{
    return (powr(r-1) * 2)%m;
   }
}

int main()
{
    //time_t start_time, finish_time;
	//start_time = time(NULL);
   ll x, y, z, a, n, b, t, c, d, r;

   while(cin >> a && a != -1){
      cin >> b >> c >> d;
      ll two = powr(2);
      //finish_time = time(NULL);
    	//cout<<"***"<<finish_time - start_time<<endl;
      x = 0, y = 0, z = 1;
      int v = 0;
     // cout << two <<endl;
      cin >> t;
      for(int i = 0; i < t; i++){
         cin >> n;
         arr[i] = n;
         if(n<0){
            Map.insert(mp(n, 0));
         }
         else{
            temp[v++] = n;
         }

      }
      sort(temp, temp + v);
//      rep(i, t){
//         cout << temp[i] << " " ;
//      }
//      cout << endl;
      int k = 0;
//      Map.insert(mp(0,1));
        ll aa = a % m, bb = b % m, cc = c % m;
      for(int i = 0; i <= temp[v - 1]; i++){

          if(i == temp[k]){
               Map.insert(mp(temp[k], z));
               k++;
//               cout << r << " " << endl;
            }
            //r = 100000000000;
           //cout << modu(a, x) << " " << modu(b, y) << " " << modu( c, z) << " " << two<< "----"<< endl;
            //r = (((modu(a, x) + modu(b, y))%m + modu( c, z)) % m + two) % m;

            r = ((aa * (x % m)) % m + (bb * (y % m)) % m + (cc * (z % m)) % m + two) % m ;
            //r = (((a % m ) * (x % m)) % m + ((b % m ) * (y % m)) % m + ((c % m ) * (z % m)) % m + two) % m ;
            //r = (a * x + b * y + c * z + two)%m;
            x = y;
            y = z;
            z = r;

         }
         Map.insert(mp(temp[v - 1], z));
//         for(auto i : Map){
//            cout << i.fi << " " << i.se << endl;
//         }

         for(int i = 0; i < t; i++){
           cout << Map[arr[i]] << endl;
         }
         Map.clear();

   }
   //finish_time = time(NULL);
    	//cout<<"***"<<finish_time - start_time<<endl;
    return 0;
}

