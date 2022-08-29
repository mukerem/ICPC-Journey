#include<bits/stdc++.h>
using namespace std;
vector<pair<long long, long long>>v, v2;
vector<long long>p1, p2;
unordered_map<long long, long long>ans;
unordered_map<long long, vector<long long>>m, m2;

void lps_func(vector<long long> txt, vector<long long>&Lps){
    Lps[0] = 0;
    long long len = 0;
    long long i=1;
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
vector<long long> KMP(vector<long long> pattern,vector<long long> text){
    //for(auto u: pattern)cout<<u<<" ";cout<<"abc\n";
    //for(auto u: text)cout<<u<<" ";cout<<"def\n";
    long long n = text.size();
    long long m = pattern.size();
    vector<long long>Lps(m);
    vector<long long> ans;
    lps_func(pattern,Lps); // This function constructs the Lps array.

    long long i=0,j=0;
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

long long convert(string s){
    string h = "";
    int ct = 0;
    bool dec = false;
    for(long long i=0; i<s.length(); i++){
        if(dec)ct++;
        if(s[i] != '.'){
            h+=s[i];
        }
        else dec = true;
    }
    //cout<<ct<<endl;
    for(int i=ct; i<4; i++)h+='0';
    return stoi(h);
}
int main(){
    long long n;
    long long x,y;
    string a,b;
    cin>>n;
    for(long long i=0; i<n; i++){
        cin>>a>>b;
        x = convert(a);
        y = convert(b) + 1800000;
        m[x].push_back(y);
    }

    for(long long i=0; i<n; i++){
        cin>>a>>b;
        x = convert(a);
        y = convert(b) + 1800000;

        m2[x].push_back(y);
    }

    if(m.size() != m2.size()){
       cout<<"Different";
       return 0;

    }
    long long latitude, dif, difference;
    bool common, inside;
    long long ct = 0, rot;
    for(auto v: m){
        latitude = v.first;
        //cout<<latitude<<"*/*\n";
        p1 = v.second;
        p2 = m2[latitude];
        if (p1.size() != p2.size()){
            cout<<"Different";
            return 0;
        }
        rot = p1.size();
        set<long long>ave;
        if(rot > 1 ){


            sort(p1.begin(), p1.end());
            sort(p2.begin(), p2.end());
            vector<long long>margin1, margin2;
            for(long long j=1; j<rot; j++)margin1.push_back(p1[j] - p1[j-1]);
            for(long long j=1; j<rot; j++)margin2.push_back(p2[j] - p2[j-1]);
            margin2.push_back(p2[0] - p2[rot-1] + 3600000);
            for(long long j=1; j<rot-1; j++)margin2.push_back(p2[j] - p2[j-1]);
            //for(long long i=0; i<rot-1; i++)margin2.push_back(margin2[i]);

            //for(auto uu: margin1)cout<<uu<<" ";cout<<"*\n";
            vector<long long> kmp = KMP(margin1, margin2);
            //for(auto uu: kmp)cout<<uu<<" ";cout<<"**\n";
            for(auto uu: kmp)ave.insert(p2[uu] - p1[0] >= 0? p2[uu] - p1[0]: p2[uu] - p1[0] + 3600000);//, cout<<uu<<" ";
            /*for(long long j=0; j<p1.size(); j++){
                dif = p1[0] - p2[j];
                if (dif < 0)dif += 360;
                common = true;
                for(long long k=0; k<p2.size(); k++){
                    difference = p1[k] - p2[(j + k) % rot];
                    if (difference < 0)difference += 360;

                    if (difference != dif){
                        common = false;
                        break;
                    }
                }
                if(common){
                    ave.insert(dif);
                    break;
                }
            }*/
        }
        else if(rot == 1){
            ave.insert(p2[0] - p1[0] >= 0? p2[0] - p1[0]: p2[0] - p1[0] + 3600000);
        }

        if(ave.size() == 0){
            cout<<"Different";
            return 0;
        }
        /*if(ct == 0){
            for(auto u: ave){
                ans[u] = true;
            }
        }
        else{
            inside = false;
            for(auto u:ave){
                if(ans[u]){
                    inside = true;
                }
                else{
                    ans[u] = false;
                }
            }
            if(!inside){
                cout<<"Different";
                return 0;
            }
        }*/
        ct++;
        for(auto u: ave){
            ans[u]++;

        }


    }
    for(auto u: ans){
        if(u.second == m.size()){
            cout<<"Same";
            return  0;
        }
    }
    cout<<"Different";


}
