// Find three odd numbers, from 1 to 15, which can be added to obtain 30
#include <iostream>
#include <vector>

using namespace std;

vector <int> numbers;
vector <int>::iterator itr, itr2, itr3;

int main()
{
    numbers.push_back(1);
    numbers.push_back(3);
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(9);
    numbers.push_back(11);
    numbers.push_back(13);
    numbers.push_back(15);
    for (itr=numbers.begin(); itr!=numbers.end(); itr++)
    {
        for(itr2=itr+1; itr2!=numbers.end(); itr2++)
        {
            for (itr3=itr2+1; itr3!=numbers.end(); itr3++)
            {
                cout << *itr << "+" << *itr2 << "+" << *itr3 << "=" << *itr + *itr2 + *itr3 << endl << endl;
            }
        }
    }

}
