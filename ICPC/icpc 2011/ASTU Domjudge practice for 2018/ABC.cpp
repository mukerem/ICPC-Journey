#include<bits/stdc++.h>
using namespace std;
int a[3] ;
int main(){
    string s;

    for(int i=0;i<3;i++) cin>>a[i];
    cin>>s;
    sort(a, a+3) ;
    for(int i = 0 ;i<3 ; i++) cout<<a[s[i] - 'A']<<" ";
}

