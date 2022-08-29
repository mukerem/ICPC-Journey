#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{

    ofstream out("secret/b.ans");
    ofstream ut("secret/b.out");
      ll p,q,d;
      while (1) {
        cin >> p; if (p == -1)break;
        cin >> q >> d;
        ll ab = (p * q) / __gcd(p,q);

        out << (ab * d) / __gcd(ab, d) << endl;
        ut << (ab * d) / __gcd(ab, d) << endl;
      }
}
