#include<bits/stdc++.h>
using namespace std;
typedef complex<long long> pt;
#define x real()
#define y imag()

long long area(pt v, pt w){
    return v.x*w.y-v.y*w.x;
}

int main(){
    long long n,xx,yy;
    vector<pt>v;
    cin>>n;
    for(int i=0; i<n; i++){
      cin>>xx>>yy;
      v.push_back({xx,yy});
    }
    long long a = 0;
    for(int i=0; i<n;i++){
    a += area(v[i], v[(i+1)%n]);
    }
    cout<<abs(a);
}
