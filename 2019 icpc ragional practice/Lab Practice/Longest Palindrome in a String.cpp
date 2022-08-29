#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,r,str;
        cin>>s;
        int n = s.size();
        bool ok=true;
        for(int i = n; i>0&&ok; i--){
            for(int j = 0; j<=n-i&&ok; j++){
               r = s.substr(j, i);
               str = r;
               reverse(str.begin(), str.end());
               if(r == str){
                cout<<r<<endl;
                ok=false;
               }
               //cout<<r<<" "<<str<<endl;
            }
        }
    }
}


