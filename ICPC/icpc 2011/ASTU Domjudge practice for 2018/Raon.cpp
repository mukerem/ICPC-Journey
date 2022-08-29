#include<bits/stdc++.h>
using namespace std;
long long t,n;
string str;
int main(){
    cin>>t;
    for(int i=0;i<t;i++){
        int ch[26] = {0};
        cin>>n>>str;
        for(int k=0;k<n;k++){
            ch[str[k]-65]++;
        }
        int ans;
        for(int k=0;k<26;k++){
            if (ch[k]){
                ans = ch[k];
                break;
            }
        }
        for(int k=0;k<26;k++){
            if (ch[k]){
                ans = __gcd(ans, ch[k]);
            }
        }
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
}
