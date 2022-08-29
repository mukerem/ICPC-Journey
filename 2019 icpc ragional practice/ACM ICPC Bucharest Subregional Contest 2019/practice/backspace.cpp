#include<bits/stdc++.h>
using namespace std;
char c[1000005];
string word;
int main(){
    cin>>word;
    int l = word.size();

    for(int i=0; i<l; i++)c[i] = word[i];
    int k;
    for(int i=0; i<l; i++){
        if(c[i] == '<'){
            k = i-1;
            while(k >=0){
                if(c[k] != '<' && c[k] != '*'){
                    c[k] = '*';
                    break;
                }
                k--;
            }
        }
    }
    for(int i=0; i<l; i++ ){
        if(c[i] != '<' && c[i] != '*'){
            cout<<c[i];
        }
    }


}
