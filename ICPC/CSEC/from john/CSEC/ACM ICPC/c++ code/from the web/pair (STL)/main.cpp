#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair <int, int> test;
    pair <int, string> hrr(5, "yohanes");
    test.first = 4;
    test.second = 8;
    cout << "The first element is: " << test.first << endl;
    cout << "The second element is: " <<test.second << endl;
    cout << endl;


    cout << "The first element is: " << hrr.first << endl;
    cout << "The second element is: " <<hrr.second << endl;
    cout << endl;

    vector <pair<int, string> >eer;
    vector <pair<int, string> >::iterator itr;
    eer.push_back(make_pair(4, "yohanes"));
    int v;
    string w;
    for (itr=eer.begin(); itr!=eer.end(); itr++)
        {
            v = itr->first;
            w = itr->second;
            cout << "\tthe number " << v << "is with the name " << w << endl;
        }


}

