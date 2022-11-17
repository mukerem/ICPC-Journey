// Time: 2019-08-20 14:08:00
// title: Dividing Sequence
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v, v2;
    int n,x,i;
    cin>>n;
    x = n;
    for(i = n; i>=1; i--)
    {
        if(x%i == 0)
        {
            v.push_back(i);
            x = i;
        }
    }
    int d  = 0;
    while(n)
    {
        d++;
        n /= 2;
    }
    d--;
    n = 1 << d;
    x = n;
    for(i = n; i>=1; i--)
    {
        if(x%i == 0)
        {
            v2.push_back(i);
            x = i;
        }
    }
    //cout<<n<<endl;
    if(v2.size()> v.size())
    {
        cout<<v2.size()<<"\n";
        for(i = v2.size()-1; i>= 0; i--)
        {
            cout<<v2[i]<<" ";
        }
    }
    else
    {
        cout<<v.size()<<"\n";
        for(i = v.size()-1; i>= 0; i--)
        {
            cout<<v[i]<<" ";
        }
    }
}

