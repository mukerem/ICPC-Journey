#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> vote;
    string name;
    while(getline(cin, name)&& name!= "***"){
        vote[name] += 1;
        /*
        if(vote.count(name) == 0){
            vote[name] =  1;
        }
        else{
            vote[name] += 1;
        }*/

    }
    multimap <int, string> m;
    for(auto x: vote){
        m.insert({x.second , x.first});
    }
    auto it = m.end();
    it--;
    auto it2 = m.end();
    it2--;it2--;
    if(it->first == it2->first)
        cout<< "Runoff!"<<endl;
    else
        cout<<it->second<<endl;

    /*
    int maxx = 0;
    string ans;
    for (auto x: vote){
        if(x.second > maxx){
            maxx = x.second;
            ans = x.first;
        }
        else if(x.second == maxx )
            ans = "Runoff!";

    }
    cout<<ans<<endl;
    */
}
