#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
long long gcd(long a,long b){
  if(b==0)return a;
  else return gcd(b,a%b);
}
int main()
{
  long long n,x,d;
  vector<long long> v;
  while (1) {
    cin>>n;if(n==-1)break;
    for (int i = 0; i < n; i++){
      cin>>x;v.push_back(x);}
    sort(v.begin(),v.end());
    d =v[1]-v[0];
    for (int i = 2; i < n; i++)
        d =d>(v[i]-v[i-1])?gcd(d,(v[i]-v[i-1])):gcd((v[i]-v[i-1]),d);
    cout<<((v[n-1]-v[0])/d+1)-n<<endl;
    v.clear();
  }
}
