// Time: 2019-10-02 19:57:19
// title: Cardboard Container
// language: C++


#include<bits/stdc++.h>
using namespace std;
long long ans = std::numeric_limits<long long>::max(), cost;
int main()
{
    //clock_t start = clock ( ) ;
    int v, a,b,c, x, y, k;
    cin>>v;
    x = sqrt(v);
    //if (x * x < v) x++;
    for(int i=1; i<=x ; i++)
    {
        for(int j=1; j<= x; j++)
        {
            if(v%(i*j) == 0)
            {
                k = v / (i*j);
                cost = 2 * (i*j + i*k  + j*k);
                ans = min(ans, cost);
            }
        }
    }
    cout<<ans<<endl;
    
    
}