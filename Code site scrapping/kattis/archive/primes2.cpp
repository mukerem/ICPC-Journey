// Time: 2019-11-19 12:02:20
// title: Blackboard Numbers
// language: C++


#include<bits/stdc++.h>
using namespace std;
long long base(string s, int b){
    long long x = 0, y;
    char c;
    int k;
    int n=s.size()-1;
    k = n;
    for(int i=0; i<=n; i++){
        c = s[i];
        if(c<='9' && c>= '0')y = c-48;
        else y = c-55;
        //cout<<y<<"*"<<endl;
        if(y>=b)return -1;
        x += y * powl(b, k);
        k--;
    }
    return x;
}
bool prime(long long n){
    if(n<2)return false;
    long long x = (long long)sqrt(n);
    for(long long i = 2; i<= x; i++)
        if(n%i == 0)return false;
    return true;
}
int main(){
    long long x,t,y;
     int m[] = {2,8,10,16};
    string s;
    cin>>t;
    while(t--){
        cin>>s;


        int a=0, b=0;
        for(int i=0; i<4; i++){
            y = base(s, m[i]);
            //cout<<y<<endl;
            if(y!=-1){
                b++;
                if(prime(y))
                    a++;
            }

        }
        int c = __gcd(a,b);
        cout<<a/c<<"/"<<b/c<<endl;
    }
}
