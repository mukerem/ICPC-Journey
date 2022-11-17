#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, k, m, a, b;
    multiset<int> s;


    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }


    if(k == 1){
     for(int i = 0; i<n; i++)
         cout<<v[i]<<" ";
     return 0;
    }
    else if(k == 2){
     for(int i = 1; i<n; i++)
         cout<<min(v[i], v[i-1])<<" ";
     return 0;
    }
    for(int i=0; i<k ;i++){
        s.insert(v[i]);
    }
    if(k%2){
        auto u = s.begin();
        for(int i=0; i<k/2; i++)u++;

        m = *u;
        cout<<m<<" ";
        for(int i=k; i<n; i++){
            a = v[i-k];
            b = v[i];
            if(a == m && b == m){cout<<m<<" "; continue;}
            if (a < m && b <= m || a>m && b>=m){
                if(a != b){
                    auto z = s.find(a);
                    s.erase(z);
                    s.insert(b);
                    if(b == m && a < m)
                        u++;
                }
            }
            else if(a == m && b < m ){
                s.insert(b);
                auto y = u;
                u--;
                s.erase(y);
            }
            else if(a == m && b > m ){
                s.insert(b);
                auto y = u;
                y++;
                s.erase(u);
                u = y;
            }
            else{
                auto z = s.find(a);
                s.insert(b);
                if(a > b) u--;
                else u++;
                s.erase(z);
            }
            m = *u;
            cout<<m<<" ";
        }
    }
    else{
        auto u = s.begin();
        for(int i=0; i<k/2 - 1; i++)u++;

        m = *u;
        cout<<m<<" ";
        for(int i=k; i<n; i++){
            a = v[i-k];
            b = v[i];
            if(a == m && b == m){cout<<m<<" "; continue;}
            if (a < m && b <= m || a>m && b>=m){
                if(a != b){
                    auto z = s.find(a);
                    s.erase(z);
                    s.insert(b);
                    if(b == m && a < m)
                        u++;
                }

            }
            else if(a == m && b < m ){
                s.insert(b);
                auto y = u;
                u--;
                s.erase(y);
            }
            else if(a == m && b > m ){
                s.insert(b);
                auto y = u;
                y++;
                s.erase(u);
                u = y;
            }
            else{
                auto z = s.find(a);
                s.insert(b);
                if(a > b) u--;
                else u++;
                s.erase(z);
            }
            m = *u;
            cout<<m<<" ";
        }
    }

}
