#include<bits/stdc++.h>
using namespace std;
vector<string>v;
bool pal(string s){
    int k = s.size()/2;
    int n = s.size();
    for(int i = 0; i<=k; i++){
        if(s[i] != s[n-i-1])return false;
    }
    return true;
}
int main(){
    string s, x,y;
    int a,n;
    while(cin>>s){
        int siz = s.size();
        for(int i=2; i<=siz i++){
            int k = siz - i;
            for(j = 0; j<siz; j++){
                if(s.substr(j, i)){
                    x = s.substr(j, i);
                    v.push_back(x);
                }
            }
        }
    }

}
