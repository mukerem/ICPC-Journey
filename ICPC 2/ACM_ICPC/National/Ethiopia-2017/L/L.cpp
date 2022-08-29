#include<iostream>

using namespace std;

#define rep(i,n) for (int i=0; i<n; i++)

typedef long long ll;

ll p[110][10010], t[110][3010];

int main()
{
    int m,n,l,w, c=0;

    cin>>n>>l>>m>>w;

    rep(i,m) rep(j,n) cin>>p[i][j];

    rep(i,m) rep(j,l) cin>>t[i][j];

    rep(i,n-l+1)
    {
        ll x=0;
        rep(j,m)
        {
            rep(k,m)
            {
                x+=p[i][i+k]*t[i][j];
                if(x>w)  {c++;break;}
            }
            if(x>w)  break;
        }
    }
    cout<<c<<endl;
}

