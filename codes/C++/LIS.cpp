#include<bits/stdc++.h>
using namespace std;
int x[10005];
int length[10005];
int main(){

int n;
cin>>n;
for (int i=0;i<n;i++){
cin>>x[i];
}
for (int k = 0; k < n; k++) {
length[k] = 1;
for (int i = 0; i < k; i++) {
if (x[i] < x[k]) {
length[k] = max(length[k],length[i]+1);
}
}
}

sort(length, length+n);
cout<<length[n-1]<<endl;
}
