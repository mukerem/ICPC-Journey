// Time: 2021-01-22 15:17:46
// title: Basic Programming 1
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c,t;
    cin>>n>>t;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];

    if(t == 1)cout<<7;
    else if(t == 2){
        if (a[0] > a[1])cout<<"Bigger";
        else if (a[0] == a[1]) cout<<"Equal";
        else cout<<"Smaller";

    }
    else if(t == 3){
        int r[] = {a[0], a[1], a[2]};
        sort(r, r+3);
        cout<< r[1];
    }
    else if (t == 4){
        long long s= 0;
        for(int i=0; i<n; i++)s += a[i];
        cout<<s;
    }
    else if (t == 5){
        long long s= 0;
        for(int i=0; i<n; i++)if(a[i] % 2 == 0)s += a[i];
        cout<<s;
    }
    else if (t == 6){
        string s = "";
        map<int, char>d;
        for(int i=0; i<26; i++) d[i] = char(97 + i);

        for(int i=0; i<n; i++)
            s += d[a[i]%26];
        cout<<s;
    }
    else if (t == 7){
        bool c[n];
        for(int i=0; i<n; i++) c[i] = false;
        int i = 0;
        while (true){
            i = a[i];
            if (i >= n){
                cout<<"Out";
                break;
            }
            else if (i == (n - 1)){
                cout<< "Done";
                break;
            }
            else if (c[i]){
                cout<< "Cyclic";
                break;
            }
            c[i] = true;
        }
    }
}
