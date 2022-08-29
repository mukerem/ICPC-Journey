#include<bits/stdc++.h>
using namespace std;
int wordl(string str){
    int word = 0;
    bool ok = true;
    for(auto u: str){
        if (u == ' ')ok = true;
        else if(ok&& isalpha(u)){
                word++;
                ok = false;

        }
    }
    return word;
}
int main(){
    string str;
    while(getline(cin,str) && str != "-1"){
        int alp[26] = {0};
        int word = 0;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
       cout<<wordl(str)<<" ";
       for(auto u: str){

        if(isalpha(u))
            alp[u-97]++;
       }
       for(auto u: alp)cout<<u<<" ";
       cout<<endl;


    }
}
