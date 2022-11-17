#include<bits/stdc++.h>
using namespace std;
long long power(long long x, long long y){
    if(y == 0)return 1;
    if(y%2 == 0){
    long long v = power(x, y/2);
    return v*v;
    }
    else{
     return power(x, y-1) * x;
    }
}
long long gcd_sum(map<long long, long long> x, map<long long, long long> y){
    long long z = 1;
    for(auto u: x){
        long long w = y[u.first];
        z *= power(u.first, min(u.second, w));
    }
    return z;
}
map<long long, long long> factorization(long long n){
    map<long long, long long> m;
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            long long count = 0;
            while (n % i == 0) {
                n /= i;
                count += 1;
            }

            m.insert({ i, count});
        }
    }
     if (n > 1) {
        m.insert({ n, 1 });
    }
    return m;
}

int main(){
    long long n, i=1, z;
    cin>>n;
    vector<long long> v;
    for(; i*i<n; i++){
        if(n%i == 0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    if(i*i == n)v.push_back(i);
    sort(v.begin(), v.end());
    vector<map<long long, long long>>arr;
    for(auto u: v){
        map<long long, long long> z = factorization(u);
        arr.push_back(z);
    }
    long long ans = 0, q, x, y;
    for(auto x: arr){
        for(auto y: arr){
            ans += gcd_sum(x, y);
        }
    }

    cout<<ans;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, i=1, z;
    cin>>n;
    vector<long long> v;
    for(; i*i<n; i++){
        if(n%i == 0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    if(i*i == n)v.push_back(i);
    sort(v.begin(), v.end());
    long long ans = 0, q, x, y;
    map<pair<long long , long long>, long long>m;
    int p = v.size();
    for(int i=0; i<p; i++)
        for(int j=i;j<p; j++)
            m[{v[i], v[j]}] = 0;
    ans = 2*p-1;
    for(int i=1; i<p; i++){
        for(int j=i; j<p; j++){
            x = v[i];
            y = v[j];
            if(y%x == 0){
              if(y==x)
                   ans += x;
               else ans += 2*x;
               continue;
            }
            q = m[{x, y}];
            if(q != 0){
                ans += 2*q;
                continue;
            }
            q = __gcd(y, x);
            if(q == 1){
                x *= 2;
                z = 2;
                while(x < y){
                    m[{x, y}] = z;
                    x *= 2;
                    z *= 2;

                }
            }
            ans += 2*q;
        }
    }
    cout<<ans;
}

*/
