#include<bits/stdc++.h>
using namespace std;
vector<tuple<int, int, string>> car;
vector <string> ans;
int main(){
    int t, p, l, q, h,d;
    string m;
    cin>>t;
    while(t--){
        cin>>d;

        for (int i=0; i<d; i++){
            cin>>m>>l>>h;
            car.push_back(make_tuple(l, h, m));
        }
        sort(car.begin(), car.end());
        cin>>q;
        for(int i=0; i<q; i++){
            cin>>p;
            for(int j=0; j<d; j++){
                if(get<0>(car[j]) <= p){
                    if(get<1>(car[j]) >= p)
                        ans.push_back(get<2>(car[j]));
                }

                else break;
                if(ans.size() > 1)break;
            }
            if(ans.size() == 1) cout<<ans.front()<<endl;
            else cout<<"UNDETERMINED"<<endl;
            ans.clear();
        }
        cout<<endl;
        car.clear();

    }

}
