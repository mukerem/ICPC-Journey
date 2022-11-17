#include<bits/stdc++.h>
using namespace std;


void josephus(vector < int > person, int k, int index) {
  if (person.size() == 1) {
    cout << person[0] << endl;
    return;
  }
  index = ((index + k) % person.size());
  cout<<*(person.begin() + index)<<" ";
  person.erase(person.begin() + index);
  josephus(person, k, index);
}



int main(){
  int n, k;
  cin>>n>>k;
  vector < int > person;
  for (int i = 1; i <= n; i++) {
      person.push_back(i);
  }
  /*
  int m = n;
  idx = 0;
  for(int i=i; i<n; i++){
   idx = (idx + k) % m;
   while(person[idx] == -1)idx = (idx + 1)%n;
   person[idx] = -1;
  }
*/
  josephus(person, k, 0);

}
