#include<bits/stdc++.h>
using namespace std;
vector<pair<int, string>> v;
vector<pair<int, string>>  v2;
vector<pair<int, string>>  v3;

int main(){
    int n,k, mou, dif;
    char c;
    int x1, x2, step;
    cin>>n>>k;
    int ans[n];
    for(int i=0; i<k; i++){
        cin>>c>>x1>>x2;
        x1--;x2--;
        if(c == 'R'){
            v.push_back({x1, "R+"});
            v.push_back({x2+1, "R-"});
        }
        else if(c == 'D'){
            v.push_back({x1, "D+"});
            v.push_back({x2+1, "D-"});
        }
        else if(c == 'H'){
            dif = x2 - x1 + 1;
            step = dif%2;
            mou = dif/2 + step;
            v.push_back({x1, "H+", 0});
            v.push_back({x1 + mou - 1, "H-". mou});

            v3.push_back({x1 + mou, "V+"});
            v3.push_back({x2, "V-"});

        }
        else if(c == 'V'){
            dif = x2 - x1 + 1;
            step =dif%2;
            mou = dif/2 + step;
            v3.push_back({x1, "V+"});
            v3.push_back({x1 + mou, "V-"});

            v.push_back({x1 + mou + 1 - step, "H+"});
            v.push_back({x2+1, "H-"});
        }
    }
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());
    sort(v3.rbegin(), v3.rend());
    //cout<<v.size()<<" "<<(1 < v2.size() - 1)<<endl;
    int x,y, nextx;
    string z;

    for(int i=0; i<n;i++)ans[i]=0;

    int inc = 0, slope=0, slope_inc=0;
    int v2_size = v2.size(); v2_size--;
    int v_size =  v.size();v_size--;
    int v3_size =  v3.size();v3_size--;
    for(int i=0; i < v2_size;i++){
        nextx = v2[i+1].first;
        x = v2[i].first;
        z = v2[i].second;
        if(z == "R+" || z == "D-")inc++;
        else if(z == "R-" || z == "D+")inc--;
        for(int j=x; j<nextx; j++){
            ans[j] = inc;
        }
    }
    inc = 0;
    int mul=0;
    for(int i=0; i < v_size;i++){
        nextx = v[i+1].first;
        x = v[i].first;
        z = v[i].second;
        if(z == "H+")inc++;
        else if(z == "H-")inc--;
        //cout<<inc<<" "<<x;
        for(int j=x; j<nextx; j++){
            mul++;
            ans[j] += inc * mul;

        }
    }

    inc = 0;mul=0;
    for(int i=0; i < v3_size;i++){
        nextx = v3[i+1].first;
        x = v3[i].first;
        z = v3[i].second;
        if(z == "V+")inc++;
        else if(z == "V-")inc--;
        for(int j=x; j>nextx; j--){
            mul++;
            ans[j] -= inc * mul;
        }
    }

    /*
    //cout<<4444;
    for(int i=0; i<v_size;i++){
        tie(nextx,z) = v[i+1];
        tie(x,z) = v[i];
        if(z == "C+" || z == "B-") slope--;
        //else if(z == "B+" || z == "C-") slope--;

        else if(z == "H+")slope_inc+=1;
        else if(z == "H-" ) slope_inc -= 2;
        else if(z == "V+") slope_inc -= 1;
        else if(z == "V+")slope_inc+=2;

        else if(z == "V") slope_inc -= 1;
        else if(z == "H")slope_inc +=1;

        for(int j=x; j<nextx; j++){
            slope += slope_inc;
            ans[j] += slope;
        }

    }
    */
    //for(int i=nextx; i<n; i++)ans[i] = 0;
    for(int i=0; i<n; i++)cout<<ans[i]<<endl;

    for(auto u: v){
        tie(x,z) = u;
        cout<<x<<" "<<z<<endl;
    }

    for(auto u: v3){
        tie(x,z) = u;
        cout<<x<<" "<<z<<endl;
    }

}
