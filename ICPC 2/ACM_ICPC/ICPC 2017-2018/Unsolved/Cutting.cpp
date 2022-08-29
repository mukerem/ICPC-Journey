#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int stick(int l,int r,int k)
{
  int mid =(l+r)/2,sum =0;
  if(mid==l)return r;
  for (int i = v.size()-1; i>=0; i--) {
    if(v[i]>=mid)sum +=v[i]/mid;
    else break;
  }
  if(sum > k)return stick(mid,r,k);
  else return stick(l,mid,k);
}
int main()
{
  int n,k,x;
  long long sum;
  while (1) {sum =0;
    cin>>n;if(n==-1)break;
    cin>>k;
    for (int i=0; i < n; i++){
      cin>>x;v.push_back(x);
      sum+=x;
    }
    sort(v.begin(),v.end());
    int mx =sum/k;
    cout<<stick(0,mx,k)<<endl;
    v.clear();
  }
}
