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

string word[100000];
bool let[27];
bool num[11];

int check(string str)
{
   for(int i = 0; i < str.length(); i++){
      if(str[i] >= '0' && str[i] <= '9'){
         if(!num[str[i] - '0']) return -1;
      }
      else if(str[i] >= 'a' && str[i] <= 'z'){
         if(!let[str[i] - 'a']) return -1;
      }
   }
   return str.length();
}

int main()
{

   int n;
   while(cin >> n && n != -1){
      for(int i = 0; i < 26; i++) let[i] = 0;
      for(int i = 0; i < 10; i++) num[i] = 0;
      for(int i = 0; i < n; i++){
         cin >> word[i];
      }
      for(int i = 0; i < 36; i++){
         char c, seg;
         cin >> c;
         cin >> seg;
         bool ok = 1;
         if(seg == '-') continue;
         else
            while(cin >> seg && seg != '-');
         //if(!ok) continue;
         //if(seg == '-') continue;
         if(c >= '0' && c <= '9') num[c - '0'] = 1;
         else if(c >= 'a' && c <= 'z') let[c - 'a'] = 1;
      }
      int ma = 0;
      string ans = "";
      //rep(i, 26) cout << let[i] << " " ;
      for(int i = 0; i < n; i++){
         if(check(word[i]) > ma){
            ma = word[i].length();
            //cout << word[i] << endl;
            ans = word[i];
         }
      }
      cout << ma << " " <<ans << endl;
   }

    return 0;
}

