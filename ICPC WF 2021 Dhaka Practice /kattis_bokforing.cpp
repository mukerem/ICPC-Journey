#include<bits/stdc++.h>
using namespace std;

int main(){
    string type;
    int i,n,q,x, last, restart=-1, update = 0;
    cin>>n>>q;
    vector<vector<int>>status(n);
    vector<int>a(n, 0);
    for(int i=0; i<n; i++)status[i].push_back(-1);
    for(int idx=0; idx<q; idx++){
        cin>>type;
        if(type=="SET"){
            cin>>i>>x;
            i--;
            a[i] = x;
            status[i].push_back(idx);

        }
        else if(type=="RESTART"){
            cin>>x;
            update = x;
            restart = idx;
        }
        else{
           cin>>i;
           i--;
           last = status[i][status[i].size()-1];
           if(last > restart)cout<<a[i]<<endl;
            else cout<<update<<endl;
        }
    }
}
