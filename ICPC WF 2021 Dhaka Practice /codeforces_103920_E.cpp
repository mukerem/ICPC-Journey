#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>v, int n, int w, int k){
   int d = 1, u = v[0];
   for(int i=0; i<n; i++){
       if(v[i] - u < w)continue;
       d++;
       u = v[i];
   }
   return d <= k;

}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(), v.end());
    int l = 1, r = (v[n-1] - v[0] + k) / k;
    while(l < r){
       int m = (l+r)/2;
       if(check(v, n, m, k)){
       r = m;
       }
       else l = m+1;
    }
    while(check(v, n, r, k))
       r--;
    cout<<r+1<<endl;
}
