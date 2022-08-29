#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int check(char x, char y){
    int a = abs(x - y);
    if(a < 13){
        return a;
    }
    else return 26 - a;
}

int main()
{
    ll x,r;
    string str;
    while(cin >> str && str != "-1"){
        int ans = 0, n = str.length();
        for(int i = 0; i < n / 2; i++){
            //cout << check(str[i], str[n - i - 1]) << " ";
            ans += check(str[i], str[n - i - 1]);
        }
        cout << ans << endl;
    }
    
    return 0;
}