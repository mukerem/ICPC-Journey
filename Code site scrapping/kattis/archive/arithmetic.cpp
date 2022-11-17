// Time: 2021-01-22 09:49:35
// title: Arithmetic
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t="", ans="";
    cin>>s;
    map<char, string> m{{'0', "000"}, {'1', "001"}, {'2', "010"}, {'3', "011"}, {'4', "100"}, {'5', "101"}, {'6', "110"}, {'7', "111"}};
    map<string, string> n{{"0000", "0"}, {"0001", "1"}, {"0010", "2"}, {"0011", "3"}, {"0100", "4"}, {"0101", "5"}, {"0110", "6"}, {"0111", "7"},
        {"1000", "8"}, {"1001", "9"}, {"1010", "A"}, {"1011", "B"}, {"1100", "C"}, {"1101", "D"}, {"1110", "E"}, {"1111", "F"}};
    int l = s.size();
    for(int i=0; i<l; i++){
        t += m[s[i]];
    }
    l = t.size()%4;
    for(int i=0; l!= 0 && i<4-l; i++){
            t = "0" + t;
    }
    l = t.size();
    string x;
    for(int i=0; i<l; i+= 4){
        x = t.substr(i, 4);
        ans += n[x];
    }
    if (ans[0] == '0')ans = ans.substr(1, ans.size() - 1);
    if(ans=="")ans="0";
    cout<<ans<<endl;
}
