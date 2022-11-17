#include<bits/stdc++.h>
using namespace std;
typedef double T;
typedef complex<T> pt;
#define x real()
#define y imag()

T cross(pt v, pt w){return v.x*w.y-v.y*w.x;}
T orient(pt a, pt b, pt c){return cross(b-a, c-a);}

int main(){
    int n,x1,x2,x3,y1,y2,y3;
    cin>>n;
    for(int i=0; i<n; i++){
      cin>>x1>>y1>>x2>>y2>>x3>>y3;
      pt p{x1,y1}, q{x2,y2}, r{x3,y3};
      T d = orient(p,q,r);
      if(d == 0)cout<<"TOUCH\n";
      else if(d>0) cout<<"LEFT\n";
      else cout<<"RIGHT\n";
    }
}
