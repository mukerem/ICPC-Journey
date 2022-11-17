// Time: 2019-11-27 18:08:28
// title: Inverse Factorial
// language: C++


#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    double x = ((n * log10(n / M_E) +
                 log10(2 * M_PI * n) /
                 2.0));

    return int(floor(x) + 1);
}
int main()
{
    string ans[]={"1","1","2","6","24","120","720","5040"};
    string n;
    cin>>n;
    int s=1;

    for(int i=1;i<=7; i++){
        if(ans[i] == n){
            cout<<i;
            return 0;
        }
    }
    int st = n.size();
    for(int i=10; i<205051; i++){
        if(fact(i) == st){
            cout<<i;
            return 0;
        }
    }
}

