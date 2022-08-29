
#include<iostream>
using namespace std;
int main(){
int n = 10;
int x[n];
for(int i=0;i<n;i++){
cin>>x[i];
}
int c = x[0];
x[0] = x[n-1];
x[n-1] = c;

for(int i=0;i<n;i++){
cout<<x[i]<<" ";
}
}
