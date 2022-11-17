#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n;
    string s;
    map<char, int> m;
    cin>>s;
    n = s.length();
    for(long long i=0; i<n; i++)m[s[i]]++;
    int a=  0;
    for(auto u: m){
    if(u.second % 2)a++;
    }
    if(a>1){
    cout<<"NO SOLUTION";
    return 0;
    }
    string b = "";
    int x;
    char y;
    for (auto u: m){
    int d = u.second;
    if(d%2){
     x = d;
     y = u.first;

     continue;
    }
    d = d/2;
     for(int i=0; i<d; i++) b += u.first;
    }
    int z = b.length();
    if(a== 1){
     for(int i=0; i<x; i++)b += y;
    }
    char c;
    for(int i = z-1; i>=0; i--){
     c = b[i];
     b += c;
    }
    cout<<b;

    return 0;
}
