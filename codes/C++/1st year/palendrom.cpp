#include<iostream>
#include<fstream>
using namespace std;
bool palendrom(string);
int main(){
    ifstream in;
    in.open("word.txt");
    int c = 0;
    string word;
    bool pal;
    while(in.good()){
        in>>word;
        pal = palendrom(word);
        if(pal)
            c++;
    }
    cout<<"The number of palendrom is "<<c<<endl;
}
bool palendrom(string s){
    int n = s.size();
    for(int i=0; i<=n/2; i++){
        if(s[i] != s[n-i-1])
            return false;
    }
    return true;
}
