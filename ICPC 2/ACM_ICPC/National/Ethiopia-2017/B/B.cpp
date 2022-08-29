#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for (int i=0; i<n; i++)

typedef long long ll;

#define pll pair<ll,ll>
#define pii pair<int,int>
#define mp make_pair
#define fi first
#define se second
#define it1 multimap<int, int>::iterator
#define it2 map<pii, int>::iterator
#define vv vector<int>


multimap<int, int> e;
map<pii, int> w;
vector<bool> vis;

int nu =int(1e9), de =1;

void cycle(it1 it, vector<bool> v, vv a, vv b){


    if(v[it->se]){
        int x =(w[mp(it->fi,it->se)]+a[it->fi]);
        int y =(1+b[it->fi]);
        if(double(x-a[it->se])/(y-b[it->se]) < double(nu)/de){
            nu =x-a[it->se];
            de =y-b[it->se];

        }
        return;
    }
    a[it->se]=(w[mp(it->fi,it->se)]+a[it->fi]);
    b[it->se]=(1+b[it->fi]);

    /***cout<<a[it->se]<<" - "<<b[it->se]<<endl;
    cout<<it->fi<<" "<<it->se<<endl;
    system("pause");*/

    v[it->fi]=true;

    it1 i =e.find(it->se);

    for(int j=it->se; j==i->fi;i++) cycle(i, v, a, b);
}

int main(){

  /**  ofstream in("d.in");
    ofstream out("d.out");
*/
    int n,m;cin>>n>>m;

  ///  in<<n<<" "<<m<<endl;


    vv a,b;
    rep(i,n){vis.push_back(0);a.push_back(0);b.push_back(0);}

    rep(i,m){
        int u,v,x; cin >>u >>v >>x;

     ///   in << u<<" "<<v<<" "<<x<<endl;

        pii p =mp(u, v);
        e.insert(p);
        w.insert(mp(p, x));
    }


    for(it1 i=e.begin(); i!=e.end();i++)cout<<i->fi<<"  "<<i->se<<endl;

    for(it2 i=w.begin(); i!=w.end();i++)cout<<"["<<i->fi.fi<<" "<<i->fi.se<<"]"<<" = "<<i->se<<endl;


   it1 it =e.begin();
   for(int j=it->fi; j==it->fi;it++)
   cycle(it, vis, a, b);

   if(nu == int(1e9)){
        cout<<0<<" "<<0<<endl;
     ///   out<<0<<" "<<0<<endl;
   }
   else {
        cout<<nu/__gcd(nu,de)<<" "<<de/__gcd(nu,de)<<endl;
    ///   out<<nu/__gcd(nu,de)<<" "<<de/__gcd(nu,de)<<endl;
   }
}
