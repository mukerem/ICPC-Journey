#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
  vector<int> M_v[100];
  int ans =0, n=0;
  string s_in;
  while (cin >>  s_in) {
    if(s_in == "#")break;
    int num =atoi(s_in.c_str()), tem =-1,k=0;
    if(n == 0)M_v[n].push_back(num);
    else{
    for (int i = 0; i < n; i++) {
      int si =M_v[i].size();
        if(M_v[i][si-1] < num && si > k){
              tem =i;k =si;
      }
    }
    if(tem != -1)M_v[n] =M_v[tem];
    M_v[n].push_back(num);
    int s =tem != -1? M_v[tem].size():0;
    ans =max(ans, s+1);}
      n++;
   }
   
  cout << ans << endl;
}
