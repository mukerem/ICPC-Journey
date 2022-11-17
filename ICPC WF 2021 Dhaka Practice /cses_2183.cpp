
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 ll n,y;
 cin>>n;
 ll a[n];
 for(int i=0; i<n; i++){
  cin>>a[i];
 }


long long int res = 1; // Initialize result

   sort(a, a+n);

   for (int i = 0; i < n && a[i] <= res; i++)
       res = res + a[i];

   cout<< res;
  }
