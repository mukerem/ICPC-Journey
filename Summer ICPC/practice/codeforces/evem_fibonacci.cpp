#include<bits/stdc++.h>
using namespace std;
vector<long long> fib = {1,2}, even_fib;
int main()
{
    long long t,n, top, top2, c;
    top = 2; top2 = 1;
    while( top <= 40000000000000000)
    {
        fib.push_back(top + top2);
        c = top;
        top += top2;
        top2 = c;

    }
    for(auto x: fib)
        if(x%2 == 0)even_fib.push_back(x);

    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        long long sum = 0;
        for(auto x: even_fib)
        {
            if(x <= n) sum = (x%2 == 0) ?  sum +x: sum;
            else break;
        }
        cout<<sum<<endl;
    }
}
