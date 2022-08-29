#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
std::vector<int> v;
long long f(long long t){
  long long ans=0;
  for (int i = 0;i <v.size(); i++){
    if(t >v[i])ans +=t/v[i];
    else break;
  }
  return ans;
}
long long calcu(long long low, long long high,int m)
{
  long long ans =high;
  while(low <= high) {
    long long mid = (low + high) / 2;
    long long mi =f(mid);
    if(mi == m){
      ans =mid;
      break;
    }
    else if(mi > m)high = mid;
    else low = mid;
  }
  return ans;
}
int main()
{

  long long n,m,temp =0,x;
  while (1) {
    cin>>n;
    if(n==-1)break;
    cin>>m;
    for (int i = 0; i < n; i++) {
      cin>>x;v.push_back(x);
      if(temp <x)temp =x;
    }
    sort(v.begin(),v.end());
    cout << calcu(0,temp*temp,m)<<endl;
    v.clear();
  }
}
