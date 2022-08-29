#include<bits/stdc++.h>
using namespace std;

    typedef double T;
    typedef complex<T> pt;
    #define x real()
    #define y imag()
    int main(){
        pt p{3,-4}, q= {6,9};
        cout << p.x << " " << p.y << "\n"; // 3 -4
        // Can be printed out of the box
        cout << p << "\n"; // (3,-4)
        pt p2{-3,2};
        //p2.x = 1; // doesn’t compile
        p2 = {1,2}; // correct
        cout<<p2<<"\n";
        pt a{3,1}, b{1,-2};
        a += 2.0*b; // a = (5,-3)
        cout<<a<<"\n";
        cout << a*b << " " << a/-b << "\n"; // (-1,-13) (-2.2,-1.4)
        pt p3{4,3};
        // Get the absolute value and argument of point (in [-pi,pi])
        cout << abs(p3) << " " << arg(p3) << "\n"; // 5 0.643501
        // Make a point from polar coordinates
        cout << polar(2.0, -M_PI/4.0) << "\n"; // (1.41421,-1.41421)
        cout<<M_PI<<"\n";
        cout<<norm(complex<double>(2.0,1.0))<<"\n";
        cout<<(norm(complex<double>(2.0,1.0)) == 5.0)<<"\n";
        cout<<(norm(complex<double>(2.0,1.0)) == 5)<<"\n";
        cout<<(5==5.0)<<"\n";
    }
