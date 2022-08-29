#include<bits/stdc++.h>

using namespace std;

#define rep(i,n) for (int i=0; i<n; i++)
#define sz(s) s.size()

typedef long long ll;

const int ind=int(1e4)+1;
int c[ind], n;

int main()
{

  ///  ofstream in("a.in");
   /// ofstream out("a.out");

    cin>>n;
  ///  in<<n<<endl;
    rep(i,n)cin >> c[i];// in<<c[i]<<" ";}

    sort(c,c+n);

    cout<<max( (c[0]*c[1]), max( (c[0]*c[1]*c[2]), max( (c[n-1]*c[n-2]), (c[n-1]*c[n-2]*c[n-3]))))<<endl;
 ///   out<<max( (c[0]*c[1]), max( (c[0]*c[1]*c[2]), max( (c[n-1]*c[n-2]), (c[n-1]*c[n-2]*c[n-3]))))<<endl;


}

