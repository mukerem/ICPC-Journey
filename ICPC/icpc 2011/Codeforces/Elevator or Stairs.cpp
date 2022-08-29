#include<iostream>
#include<cmath>
using namespace std;
int x,y,z,t1,t2,t3;
int main()
{
    cin>>x>>y>>z>>t1>>t2>>t3;
    int ans1 = abs(x-y) * t1;
    int ans2 = (abs(x-y) + abs(z - x)) * t2 + 3 * t3;
    if (ans1 < ans2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
