#include<bits/stdc++.h>

using namespace std;
int main(){
    set<string> city;
    string name;
    int t,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>c;
        for(int j=0;j<c;j++){
            cin>>name;
            city.insert(name);
        }
        cout<<city.size()<<endl;
        city.clear();
    }
}
