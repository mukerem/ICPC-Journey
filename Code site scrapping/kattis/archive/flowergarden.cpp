// Time: 2019-11-19 12:21:08
// title: Flower Garden
// language: C++


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime[20001];
vector<int>v;
void seive()
{
    prime[0] = true;
    prime[1] = true;
    for(int i=2; i<= 142; i++)
    {
        if(prime[i])continue;
        for(int j = i+i; j<= 20000; j += i)
        {
            prime[j]=true;
        }
    }
    for(int i=2; i<= 20000; i++)
        if(!prime[i])
            v.push_back(i);
}

int main()
{
    seive();
    int t, n,x,y,xf, yf;
    double d, dis;
    cin>>t;
    //for(int i=0; i<200;i++)cout<<v[i]<<" ";
    while(t--)
    {
        int cou = 0;
        xf=0;
        yf=0;
        cin>>n>>d;
        int i;
        for(i=0; i<n; i++)
        {
            cin>>x>>y;
            dis = (double)sqrt(powl((xf-x), 2) + powl((yf-y),2));
            //dis = sqrt(x*x + y*y);
            if(dis<= d)
            {
                d -= dis;
                cou++;
                xf=x;
                yf=y;
            }
            else break;

        }
        i++;
        for(;i<n;i++)cin>>x>>y;
        int ans = 0;
        for(auto u: v)
        {
            if(u > cou)
            {
                break;
            }
            ans = u;
        }
        cout<<ans<<endl;
    }

}
