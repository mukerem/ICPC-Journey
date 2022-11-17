#include <bits/stdc++.h>
using namespace std;
int divr[3000000 + 1];
void findDivisors(int n)
{

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j * i <= n; j++)
            divr[i * j]++;
    }

    for (int i = 1; i <= n; i++)
        cout << divr[i]+1 << "\n";
}

int main()
{
    int n;
    cin>>n;
    findDivisors(n);

    return 0;
}
