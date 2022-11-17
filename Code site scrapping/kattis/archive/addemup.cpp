// Time: 2021-02-03 16:23:16
// title: Add 'Em Up!
// language: C++


#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n,sum;
map<int, int>m, mm;
bool checkPair(){
    unordered_set<int> s;
    int val, x, y;
    string z, zz;
    bool t;
    for (int i=0; i<n; i++)
    {
        //cout<<v[i]<< " ";
        val = sum-v[i];

        // If element exist than return the pair
        if (s.find(val) != s.end())
        {

            x = v[i];
            z = to_string(val);
            t = true;
            for(int j=0; j<z.size(); j++){
                if(z[j] == '7' || z[j] == '3' || z[j] == '4'){
                    t = false;
                    break;
                }
                if(z[j] == '6')z[j] = '9';
                else if(z[j] == '9') z[j] = '6';
            }
            if(t){

                zz = "";
                for(int j=0; j<z.size(); j++)zz = z[j] + zz;
                y = stoi(zz);

                if(x==y){
                        if(m[v[i]] + m[val] < 2) continue;
                }
            }

            //if(mm[v[i]] > 0 && mm[val] > 0 || m[v[i]] > 0 && m[val] > 0)
                return true;
        }

        s.insert(v[i]);
    }

    return false;
}

int main(){
    int x,y;
    string z, zz;
    cin>>n>>sum;
    bool t;
    int c=0;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
        m[x] += 1;
        z = to_string(x);
        t = true;
        for(int j=0; j<z.size(); j++){
            if(z[j] == '7' || z[j] == '3' || z[j] == '4'){
                t = false;
                break;
            }
            if(z[j] == '6')z[j] = '9';
            else if(z[j] == '9') z[j] = '6';
        }
        if(t){
            zz = "";
            for(int j=0; j<z.size(); j++)zz = z[j] + zz;
            y = stoi(zz);
            v.push_back(y);c++;
                    mm[y] += 1;

        }

    }
    n += c;


    t = checkPair();

    if(t)cout<<"YES";
    else cout<<"NO";

}
