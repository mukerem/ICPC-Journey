#include<bits/stdc++.h>
using namespace std;
set<int> left, right;
int begin = 0, end = 9;
bitset <9> x;
int main(){
    char ope;
    int si, last = 0, frontt;
    cin>>si;
    for(int i=0;i<si; i++){
        cin>>ope;
        if(room.empty()) x[last++]=1;
        else{
            frontt = *room.begin();
            x[frontt] = 1;
            room.erase(room.begin());
        }
    }
    for(int i = 0; i<10;i++)cout<<x[i];
    cout<<endl;

}
