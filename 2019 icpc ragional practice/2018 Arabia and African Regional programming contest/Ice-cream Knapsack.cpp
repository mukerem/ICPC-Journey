#include<bits/stdc++.h>
using namespace std;


int main(){
    //ifstream f;
    //f.open("icecream.in");
    long long n,k, t, x, dense;
    cin>>t;
    while(t--){
        vector<pair<long long, long long>>v;
        multiset<int> ms;
        long long ans=0;
        long long calorie[100005];
        cin>>n>>k;
        for(int i=0; i<n ;i++)cin>>calorie[i];
        for(int i=0; i<n ;i++){
            cin>>x;
            v.push_back({calorie[i], -x});
        }

        sort(v.begin(), v.end());
        dense = v[k-1].first;

        for(int i=0; i<k; i++)
            ms.insert(-v[i].second);
        //for(auto z: ms)cout<<z<< " ";cout<<endl;
        for(int i=k; i<n; i++){
            if(v[i].first != dense)break;
             if((*(ms.begin())<(-v[i].second))){
                //cout<<*ms.begin()<<" "<<-v[i].second<<endl;
                ms.erase(ms.begin());
                ms.insert(-v[i].second);

             }
        }
        for(auto z: ms) ans += z;
        cout<<dense<<" "<<ans<<endl;

    }
}
