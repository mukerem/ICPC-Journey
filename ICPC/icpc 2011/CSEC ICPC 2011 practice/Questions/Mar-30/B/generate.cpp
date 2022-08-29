#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ifstream in("rende");
    ofstream out("secret/b.in");
    ll a, b, m, i =0;
    while (in.good()) {
        in >> a >> b >> m;
      
        out << a << " " << b << " " << m << endl;
        i++;
     
    }
cout << "I = " << i << endl;

}
