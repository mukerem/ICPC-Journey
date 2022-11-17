// Time: 2019-11-20 20:29:18
// title: Backspace
// language: C++


#include<bits/stdc++.h>
using namespace std;
vector<char>s;
string word;
int main(){
    cin>>word;
    for(int i=0;i<word.size();i++){
        if(word[i] == '<')s.pop_back();
        else s.push_back(word[i]);
    }
    string x="";
    for(auto x: s)cout<<x;
}
