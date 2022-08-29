#include<bits/stdc++.h>
using namespace std;
typedef double T;
template <class Y> int sgn(Y x) {
return (Y(0) < x) - (x < Y(0));
}
struct pt{
    T x,y;
    pt operator+(pt p) {return {x+p.x, y+p.y};}
    pt operator-(pt p) {return {x-p.x, y-p.y};}
    pt operator*(T d) {return {x*d, y*d};}
    pt operator/(T d) {return {x/d, y/d};} // only for floating-
    bool operator==(pt a) {return a.x == x && a.y == y;}
    bool operator!=(pt a) {return a.x != x || a.y != y;}
    T sq(pt p) {return p.x*p.x + p.y*p.y;}
    double abs(pt p) {return sqrt(sq(p));}
};

ostream& operator<<(ostream& os, pt p) {
return os << "("<< p.x << "," << p.y << ")";
}
int main(){
    pt a{3,4}, b{2,-1};
    pt c=  a*5;
    cout<<c.x<<endl;
    cout << a+b << " " << a-b << "\n"; // (5,3) (1,5)
    cout << a*-1 << " " << b/2 << "\n"; // (-3,-4) (1.5,2)
    cout<<(a==b)<<"\n";
    cout<<(a!=b)<<"\n";
    cout<<sgn(10)<<"\n";
    cout<<sgn(0)<<"\n";
    cout<<sgn(-10)<<"\n";
}
