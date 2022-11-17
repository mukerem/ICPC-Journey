
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 ll n, m, x;
 cin>>n;
 vector<int> v;

 for(int i=0; i<n; i++){cin>>x; v.push_back(x);}
 ll cost = 0;
 sort(v.begin(), v.end());
 if(n %2 == 1)m = v[n/2];
 else m = (v[n/2] + v[n/2 - 1])/2;
 for(auto u: v) cost += abs(u-m);
 cout<<cost;
}
