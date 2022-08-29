
#include<iostream>
using namespace std;

int &f(){
    static int x=10;
    return x;
}

int main(){
    cout<<is_array<int>::value;
    f() = 30;
    cout<<f();


    int a[] = {10,20,30};
    cout<<-2*[a];
    return 0;
}
