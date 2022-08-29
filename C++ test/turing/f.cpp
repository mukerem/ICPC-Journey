
#include<bits/stdc++.h>
using namespace std;

template<class A>
void f(A a){cout <<a+1;}

void f(int a){cout <<a-1;}

int main(){
    int a=1;
    f(a);


    int x = 10;
    int& r = x;
    r = 20;
    cout<<x<<endl;
    x = 30;
    cout<<r<<endl;

    int t[] = {5,1,5};
    vector<int>v(t, t+2);
    cout<<count(v.begin(), v.end(), 5);
    v.empty();
    cout<<v.size();cout<<endl;

    cout.setf(ios::hex, ios::basefield); cout<<100<<" ";
    cout.unsetf(ios::hex); cout<<100<<" ";
}
