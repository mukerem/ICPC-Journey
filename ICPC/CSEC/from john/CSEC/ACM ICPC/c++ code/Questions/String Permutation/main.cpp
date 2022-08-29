#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int factorial(int a);

int main()
{
    int n;
    string word, temp;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin >> word;
        temp = word;
        cout<<"Case # "<<i+1<<":"<<endl;
        cout << word << endl;
        for (int j=0; j<factorial(word.size()); j++)
        {
            next_permutation(word.begin(), word.end());
            if (word != temp)
            {
                cout << word << endl;
            }
        }
    }
}

int factorial(int a)
{
    int f = 1;
    for (int i=a; i>0; i--)
    {
        f*=i;
    }
    return f;
}
