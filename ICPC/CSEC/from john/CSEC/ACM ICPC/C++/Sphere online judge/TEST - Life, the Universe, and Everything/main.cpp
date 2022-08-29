#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector <int> j;
    vector <int>::iterator itr;
    int temp;
    while (cin >> temp && temp != 42)
    {
        j.push_back(temp);
    }
    for (itr=j.begin(); itr!=j.end(); itr++)
    {
        cout << *itr << endl;
    }
}
