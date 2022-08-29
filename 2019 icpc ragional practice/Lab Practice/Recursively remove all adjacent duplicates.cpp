#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k, i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        while(true){
            int n = s.size();

            for(i=0; i<n-1; i++){
                k = i;
                while(k+1 < n && s[k] == s[k+1]){
                    k++;
                    cout<<k<<endl;
                }

            if(k != i){
                s = s.substr(0, i) + s.substr(k+1, n-k-1);
                cout<<s<<endl;
                break;
            }

            }

            if(i == n-1)break;
        }
        cout<<s<<endl;
    }
}

