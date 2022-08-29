#include<bits/stdc++.h>
using namespace std;
int main(){
    string b;
    int s;
    cin>>b;
    for(int i= b.size()-1; i>=0 ;i--){
        if(b[i] == 'E')break;
        b = "S" + b;
    }
    long long ans = 0, last = -1;
    for(int i = 0; i<b.size(); i++){
        if(b[i] == 'E'){

        }
    }
}
