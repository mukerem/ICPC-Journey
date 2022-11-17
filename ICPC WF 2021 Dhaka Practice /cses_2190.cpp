#include<bits/stdc++.h>
using namespace std;
typedef double T;
typedef complex<long long> pt;
#define x real()
#define y imag()
T cross(pt v, pt w){return v.x*w.y-v.y*w.x;}
T orient(pt a, pt b, pt c){return cross(b-a, c-a);}
/*
struct line{
 pt v;
 T c;
 line(pt v, T c): v(v), c(c) {}
 line(T a, T b, T c): v({b, -a}), c(c) {}
 line(pt p, pt q): v(q-p), c(cross(v, p)) {}
 T side(pt p){return cross(v,p)-c;}
T dist(pt p){return abs(side(p))/abs(v);}
};
*/
/*
bool inter(line l1, line l2, pt a){
 if(l1.v == l2.v && l1.c==l2.c)return true;
 T d = cross(l1.v, l2.v);
 if(d == 0)return false;
 return true;
}
*/

struct line {
   pt p1, p2;
};

bool onLine(line l1, pt p) {   //check whether p is on the line or not
   if(p.x <= max(l1.p1.x, l1.p2.x) && p.x <= min(l1.p1.x, l1.p2.x) &&
      (p.y <= max(l1.p1.y, l1.p2.y) && p.y <= min(l1.p1.y, l1.p2.y)))
      return true;

   return false;
}

long long direction(pt a, pt b, pt c) {
   long long val = (b.y-a.y)*(c.x-b.x)-(b.x-a.x)*(c.y-b.y);
   if (val == 0)
      return 0;     //colinear
   else if(val < 0)
      return 2;    //anti-clockwise direction
   return 1;    //clockwise direction
}

bool isIntersect(line l1, line l2) {
   //four direction for two lines and points of other line
   long long dir1 = direction(l1.p1, l1.p2, l2.p1);
   long long dir2 = direction(l1.p1, l1.p2, l2.p2);
   long long dir3 = direction(l2.p1, l2.p2, l1.p1);
   long long dir4 = direction(l2.p1, l2.p2, l1.p2);

   if(dir1 != dir2 && dir3 != dir4)
      return true; //they are intersecting

   if(dir1==0 && onLine(l1, l2.p1)) //when p2 of line2 are on the line1
      return true;

   if(dir2==0 && onLine(l1, l2.p2)) //when p1 of line2 are on the line1
      return true;

   if(dir3==0 && onLine(l2, l1.p1)) //when p2 of line1 are on the line2
      return true;

   if(dir4==0 && onLine(l2, l1.p2)) //when p1 of line1 are on the line2
      return true;

   return false;
}
int main(){
    int n;
    long long x1,x2,x3,y1,y2,y3,x4,y4;
    cin>>n;
    for(int i=0; i<n; i++){
      cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
      line  a{{x1,y1}, {x2,y2}}, b{{x3,y3},{x4, y4}};
      if(isIntersect(a,b))cout<<"YES\n";
      else cout<<"NO\n";
    }
}
