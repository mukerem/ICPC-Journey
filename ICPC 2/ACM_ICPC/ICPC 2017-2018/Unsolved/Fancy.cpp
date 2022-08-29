#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
  long long n,l;
  vector<long long> d;
  multiset<long long> s;
  while (1) {
    cin>>n;if(n==-1)break;
    cin>>l;
    for (int i = 0; i < n; i++) {
      int x;cin>>x;
      d.push_back(x);
    }
    for (int i = 0; i < n; i++) {
      multiset<long long>::iterator it =s.begin();
      if(i==0)s.insert(d[i]);
      else if((d[i]+(*it))<=l){
        long long te =d[i]+(*it);
        s.erase(it);s.insert(te);
      }
      else s.insert(d[i]);
    }
    cout<<s.size()<<endl;
    s.clear();d.clear();
  }
}
