#include<bits/stdc++.h>
using namespace std;



int main(){
    bool arr[26];


    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        fill(arr, arr+26, false);
        string st;
        getline(cin, st);

        for(int i=0; i<st.length(); i++) {
            if(st[i] >= 97 && st[i] < 123 || st[i] >= 65 && st[i] < 91) {
                char ch = tolower(st[i]);
                int idx = ch - 97;
                arr[idx] = true;
            }
        }

        string s = "";
        for(int i=0; i<26; i++) {
            if(!arr[i]) {
                char c = 97 + i;
                s += c;
            }
        }

        if(s.empty()) {
            cout << "pangram" << endl;
        } else {
            cout << "missing " << s << endl;
        }
    }
}
