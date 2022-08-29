#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n == 1)return 0;
    for(int i=2; i*i<= n; i++){
        if(n%i == 0)return 0;
    }
    return 1;

}

int main(){
    int t;
    string s;
    cin>>t;
    int k=1;
    while(t--){
        cin>>s;
        map<char, int> m;
        vector<char>v;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        string ans ="";
        for(auto x:m){
            int y = x.second;
            if(prime(y)) ans += x.first;
        }
        sort(ans.begin(), ans.end());
        cout<<"Case "<<k++<<": ";
        if (ans=="")cout<<"empty"<<endl;
        else cout<<ans<<endl;
    }

}
