#include<bits/stdc++.h>
using namespace std;

#define M 1000000007
vector<pair<int, int>>v;
long long power(long long a, long long b){
    long long res = 1;
    while (b)
    {
        if (b % 2) { res = (res * a) % M; }

        a = (a * a) % M;
        b /= 2;
    }

    return res;
}
int main(){
    string s;
    cin>>s;
    long sum = 0, l=s.size(), f;
    int h = 0;
    for(int i=0; i<l; i++)
      if(s[i] == '?')
        h++;

    int c=0,d=0, k;
    for(int i=0; i<l; i++){
      if(s[i] == '0'){
        k = i - c - d;
        f = power(2, k-1);
        f = ((k + 2*d) * f)%M;
        f *= power(2, h-k)%M;
        sum += f;
        sum %= M;
        c++;
      }
      else if(s[i] == '1'){
        v.push_back({l-i-1, c});
        d++;
      }

    }
    int e = 0;

    for(auto u: v){
        //cout<<u.first<<" "<<u.second<<endl;
        k = u.first - (c - u.second) - e;

        f = k * power(2, k-1);
        f *= power(2, h-k)%M;
        sum += f;
        sum %= M;
        e++;
    }
    k = h;
    long long sum2;
    sum2 = (k * (k-1))/2;
    sum2 = sum2 % M;
    sum2 *= power(2, k-2);
    sum2 = sum2 % M;
    sum += sum2;
    sum %= M;
    cout<<sum;
}
