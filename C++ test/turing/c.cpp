
#include<bits/stdc++.h>
using namespace std;

template<class A>
void f(A a){cout <<1;}

void f(int a){cout <<2;}

int main(){
    cout<<true<<" "<<boolalpha<<false;
    int a=1;
    f<float>(a);
}
