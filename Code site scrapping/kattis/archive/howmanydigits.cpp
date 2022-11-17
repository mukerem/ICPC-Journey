// Time: 2019-11-19 17:12:08
// title: How Many Digits?
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double ans;
    while(cin>>n){
            /*
        ans = 0;
        for(int i=2; i<=n; i++){
            ans += log10(i);
        }
        cout<<int((floor(ans)) + 1)<<endl;
        */
        if(n<=1){
            cout<<1<<endl;
            continue;
        }
        double x = ((n * log10(n / M_E) +
                 log10(2 * M_PI * n) /
                 2.0));

        cout<<int(floor(x) + 1)<<endl;
    }
}
