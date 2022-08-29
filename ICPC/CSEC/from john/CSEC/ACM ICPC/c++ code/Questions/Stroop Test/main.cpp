#include <iostream>
#include <vector>

using namespace std;

vector <int> colours;
vector <int> words;
vector <int>::iterator itr, itr2, itr3, itr4;
int n, m;
bool h, r;

int main()
{
    cin >> n;
    for (int i=0; i<n; i++)
    {
        while (cin >> m && m != 00)
        {
            colours.push_back(m/10);
            words.push_back(m%10);
        }


    }
}
