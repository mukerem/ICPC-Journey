// Time: 2019-11-17 15:57:15
// title: Collatz Conjecture
// language: C++


#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main(){
ll a,b,k, x,y;
  while(cin>>a>>b&& a&&b){
    x = a;y = b;
    map<ll, ll>m;
    k = 0;
    m[a]=-1;
    while(a>1){
        a = a&1? 3*a + 1: a/2;
        k++;
        m[a]=k;
    }
    //cout<<m[1]<<endl;
    k = 0;
    while(b>1){
        if(m[b]){
            if(m[b] == -1)m[b] = 0;
            printf("%d needs %d steps, %d needs %d steps, they meet at %d\n" , x, m[b], y, k, b);
            break;
        }
        b = b&1? 3*b+1:b/2;
        k++;
    }
    if(b == 1){
            if(m[b] == -1)m[b] = 0;
            printf("%d needs %d steps, %d needs %d steps, they meet at %d\n" , x, m[b], y, k, b);
        }

  }

}

