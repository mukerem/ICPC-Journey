#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  vector<int> v;
  stack<int> s;
  while (1) {
    cin>>n;if(n==-1)break;
    for (int i = 0; i < n-1; i++) {
      int x;
      cin>>x;v.push_back(x);
    }
    int k=1;s.push(k);
    if(n==2)cout<<1;else{
    for (int i= n-3; i >=0; i--){
      if(v[i+1]==v[i])s.push(k);
      else s.push(++k);
    }
    while (!s.empty()) {
      cout<<s.top()<<" ";
      s.pop();
    }}
    cout<<endl;v.clear();
  }
}
