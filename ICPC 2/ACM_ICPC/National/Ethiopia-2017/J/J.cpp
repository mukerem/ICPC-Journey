#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i=0; i<n; i++)
#define FOR(i, l, r) for (int i=l; i<=r; i++)
#define re return
#define fi first
#define mp make_pair
#define se second
#define sz(a) (int)a.size()

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

const ll mod = int(1e9) + 7;

int main()
{
  //  string a ="AQQQQRRRRRQQQQQICPCAEROKCPCIKOREA";
  //  reverse(a.begin(),a.end());
   // cout<<a;
    string w, vz, yz, z;

    cin>>w;
    int i=0, j=sz(w)-2;

    int ans =0, c=0;


    while(j>1){
        if(w[i]==w[j]){
            yz =w.substr(j+1);

            int k=0, l =j;
            while(k < l && w[++k]==w[--l])continue;
       ///     cout<<k<<" "<<l<<endl;
            c =k;
            vz =w.substr(k,l-k+1);

       ///     cout<<k<<" "<<l<<endl;
          ///  cout<<vz<<" "<<yz<<endl;

            k =0;l =sz(yz)-1;
            int cc=0;
            while(k < sz(vz)){
                if(vz[k]==yz[l]){
                    z =vz.substr(k);
                    if(sz(yz) >= sz(z)){
                        reverse(z.begin(),z.end());
                        if(z == yz.substr(sz(yz)-sz(z))) cc =max(c,sz(z));
                       /// cout<<c<<" "<<z<<" "<<yz.substr(sz(yz)-sz(z))<<endl;
                    }
                }
                k++;
            }

            c =min(c,cc);
           /// system("pause");
        }

        ans =max(ans,c);
        j--;
    }
    if(ans)cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}
