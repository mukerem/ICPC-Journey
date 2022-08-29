#include <iostream>
#include <vector>

using namespace std;

vector <int> test;
vector <int> Count;
vector <int>::iterator itr;
vector <int>::iterator itr2;
vector <int>::iterator itr3;
int no = 0;

int main()
{
    int n;
    while (cin >> n && 1<=n && n<=76)
    {
        for (int i=0; i<n; i++)
        {
            test.push_back(i+1);
        }
        itr = test.begin();
        itr2 = test.begin();
        itr3 = test.begin();

    }
}
