#include<bits/stdc++.h>
using namespace std;

void lps_func(vector<int> txt, vector<int>&Lps){
    Lps[0] = 0;
    int len = 0;
    int i=1;
    while (i<txt.size()){
        if(txt[i]==txt[len]){
            len++;
            Lps[i] = len;
            i++;
            continue;
        }
        else{
            if(len==0){
                Lps[i] = 0;
                i++;
                continue;
            }
            else{
                len = Lps[len-1];
                continue;
            }
        }
    }
}
/**************************************
              KMP Function
***************************************/
vector<int> KMP(vector<int> pattern,vector<int> text){
    //for(auto u: pattern)cout<<u<<" ";cout<<"abc\n";
    //for(auto u: text)cout<<u<<" ";cout<<"def\n";
    int n = text.size();
    int m = pattern.size();
    vector<int>Lps(m);
    vector<int> ans;
    lps_func(pattern,Lps); // This function constructs the Lps array.

    int i=0,j=0;
    while(i<n){
        if(pattern[j]==text[i]){i++;j++;} // If there is a match continue.
        if (j == m) {
            ans.push_back(i - m);  // if j==m it is confirmed that we have found the pattern and we output the index
                                  // and update j as Lps of last matched character.
            j = Lps[j - 1];
        }
        else if (i < n && pattern[j] != text[i]) {  // If there is a mismatch
            if (j == 0)          // if j becomes 0 then simply increment the index i
                i++;
            else
                j = Lps[j - 1];  //Update j as Lps of last matched character
        }
    }
    return ans;
}


int main(){
    vector<int> b = {0,0,4};
    vector<int> a = {1,1,1,3,4,4};
    vector<int>e;for(int j=1;j<b.size(); j++)e.push_back(b[j] - b[j-1]);
    vector<int>d;for(int j=1;j<a.size(); j++)d.push_back(a[j] - a[j-1]);
    d.push_back(a[0] - a[a.size()-1] + 7);
    for(int j=1;j<a.size()-1; j++)d.push_back(a[j] - a[j-1]);

    for(auto u: d)cout<<u<<" ";cout<<"\n";
    for(auto u: e)cout<<u<<" ";cout<<"\n";
    vector<int>c = KMP(e,d);
    for(auto u: c)cout<<u<<" ";

}
