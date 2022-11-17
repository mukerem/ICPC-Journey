// Time: 2019-11-22 22:04:28
// title: Integer Lists
// language: C++



#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n,k, sum;
    string s,x;
    cin>>t;
    while(t--){
        cin>>s>>n;
        vector<int>v;
        cin>>x;
        k = 1;
        int z = x.size()-2;
        sum = 0;
        for(int i=z; i>0; i--){
            if(x[i] == ','){k=1;v.push_back(sum);sum=0;continue;}
            sum += (x[i]-'0')*k;
            k *= 10;
        }
        if(sum)v.push_back(sum);
        reverse(v.begin(), v.end());
        int c = 0;
        for(int i=0; i<s.size(); i++)if(s[i] == 'D')c++;
        if(c>n){cout<<"error\n";continue;}
        int d = 0;
        for(int i=0 ;i<s.size();i++){
            if(s[i] == 'R'){d = d^1; continue;}

            if(d){
                v.erase(v.end() - 1);
            }
            else{
                v.erase(v.begin());
            }
        }
        if(d) reverse(v.begin(), v.end());
        int siz = v.size() - 1;
        cout<<"[";
        for(int i=0; i<siz; i++)cout<<v[i]<<",";
        if(siz>=0)cout<<v[siz];
        cout<<"]\n";
    }
}
