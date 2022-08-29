#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> key;
    int value, n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>value;
        key[value] +=  1;

    }

    for (auto x: key){
        cout<<x.first<<" "<<x.second<<endl;
    }

}

