#include<bits/stdc++.h>
using namespace std;

    long long N,ans;

int countSetBits(long long n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }

    return count;
}
int main(){
    cin>>N;
    int x = countSetBits(N);
    ans = powl(2, x);
    cout<<ans<<endl;
}
