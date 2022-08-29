#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("lis.in","r",stdin);
    string s;
    cin>>s;
    int t = s.size();
    bool c = true;
    long long ans;
    for(int i=0; i<t; i++){
        if(s[i] != '9'){
            c=false;
            break;
        }
    }
    if(c){
      ans = 9 * t;
    }
    else if(t == 1){
        ans = s[0] - 48;
    }
    else{
        ans = 9 * (t-1);
        ans += s[0] - 48 - 1;
    }
    cout<<ans;
}
