
#include<bits/stdc++.h>
using namespace std;
int LIS(int v[] , int n){
    vector<int> t(n, 0);
    int l = 1;
    t[0] = v[0];

    for (int i = 1; i < n; i++) {
        auto b = t.begin(), e = t.begin() + l;
        auto it = lower_bound(b, e, v[i]);

        if (it == t.begin() + l)
            t[l++] = v[i];
        else
            *it = v[i];
    }
    return l;
}

int main(){
int t;
cin>>t;
while(t--){
 int n, x;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
     cin>>x;
     x = x ^ i;
     a[i] = x;
 }
 cout<<LIS(a, n)<<endl;

}
}
