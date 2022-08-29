#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define mp make_pair
#define it multimap<int, int>::iterator

typedef long long ll;

multimap<int, int>m;


int main(){

  int n, h, o, l, ans =0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >>h >>o;
    m.insert(mp(min(h,o),max(h,o)));
  }
  cin >> l;

 /// for(it i=m.begin();i!=m.end();i++)cout<<i->fi<<" "<<i->se<<endl;


  it i =m.begin();
  while (i!=m.end()) {

    it j =i;
    int temp =i->fi+l, c=0;
    while(j!=m.end() && j->fi < temp){
        if(j->se <= temp)c++;
        j++;
    }
    ans =max(ans, c);

    temp =i->fi;

    while (i->fi == temp)i++;

  }
  cout << ans<<endl;
}
