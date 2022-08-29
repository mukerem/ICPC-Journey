#include <iostream>
#include <deque>

using namespace std;

deque <int> test;
deque<int>::iterator itr;

int main()
{
    for (int i=0; i<5; i++)
    {
        test.push_back(i+1);
    }
    for (itr=test.begin(); itr!=test.end(); itr++)
    {
        cout << (*itr) << endl;
    }
    cout << endl << test[2];
    cout << endl << test.front();

}
