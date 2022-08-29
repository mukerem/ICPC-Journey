#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> vec(4);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vector <string> h;
    char y[22];
    string p = "yohanes";
    cout << p.capacity();



//    strcpy(h, p.c_str(), sizeof(h));
    strcpy(y, p.c_str());
    for (int i=0; y[i]!=NULL; i++)
    {
        cout << y[i];
    }
    p[10] = "h";
    cout << p;

}
