#include<bits/stdc++.h>
using namespace std;
vector<long long> fib = {1,2};
int main()
{
    long long t,n, top, top2, c;
    top = 2; top2 = 1;
    while( top <= 10000000000)
    {
        fib.push_back(top + top2);
        c = top;
        top += top2;
        top2 = c;

    }

    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(find(fib.begin(), fib.end(), n) != fib.end())cout<<"IsFibo"<<endl;
        else cout<<"IsNotFibo"<<endl;
    }
}
