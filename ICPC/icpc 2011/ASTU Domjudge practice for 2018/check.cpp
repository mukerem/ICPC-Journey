#include<iostream>
using namespace std;
int ans[3] ;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size() - 1;i++){
        if(s[i] > s[i+1]){
            cout<<"NO";
            return 0;

        }
        ans[s[i] - 'a']++;
    }
    ans[2]++;
    if(!(ans[0] && ans[1])){
        cout<<"NO";
        return 0;
    }
    if (ans[0] == ans[2] || ans[1] == ans[2]){
        cout<<"YES";
    }
    else{
        cout<<"NO";
        return 0;
    }
}

