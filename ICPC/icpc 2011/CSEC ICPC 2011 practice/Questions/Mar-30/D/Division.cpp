#include <bits/stdc++.h>

using namespace std;
ofstream out("secret/b.out");
ofstream ou("secret/b.ans");
void div (int p, int q, int d) {
    if(d == 0) return;
    cout << p * 10 / q;out << p * 10 / q;ou << p * 10 / q;
    div(p * 10 % q, q, d - 1);
}

int main()
{
    int p, q, d;
    while(1){
        cin >> p; if(!(p+1)) break; cin >> q >> d;
        cout << "0.";out << "0.";ou << "0.";
        div(p, q, d);
        cout << endl;out << endl;ou << endl;
    }
  
}
