#include <bits/stdc++.h>
using  namespace std;

int main(){
    ifstream in("hello.in");
    int n, a, b; in >> n;
    while(n--){
        in >> a >> b;
        cout << "sum = " << a+b << endl;
    }
}

