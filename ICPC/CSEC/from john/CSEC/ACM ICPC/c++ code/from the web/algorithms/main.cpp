#include <bits/stdc++.h>

using namespace std;

vector <int> test;
vector <int>::iterator itr;
int m;
bool trr;
string str = "abcd";
string::iterator itr2;

int main()
{
    test.push_back(13);
    for (int i=15; i>0; i--)
    {
        test.push_back(i);
    }
    cout << "vector before sorting" << endl;
    for (int i=0; i<15; i++)
    {
        cout << test[i] << "\t";
    }
    cout << endl << endl;
    sort(test.begin(), test.end());//sorts the vector
    cout << "vector after sorting" << endl;
    for (itr=test.begin(); itr!=test.end(); itr++)
    {
        cout << (*itr) << "\t";
    }
    cout << endl << endl;
    cout << "is 7 in the vector? ";
    trr = binary_search(test.begin(), test.end(), 7);//tests weather a value exists in a sorted vector
    if (trr = true)
    {
        cout << "yes" << endl << endl;
    }
    else
    {
        cout << "no" << endl << endl;
    }
    reverse(test.begin(), test.end());//reverses the vector
    cout << "the reversed vector is: " << endl;
    for (itr=test.begin(); itr!=test.end(); itr++)
    {
        cout << (*itr) << "\t";
    }
    cout << endl;
    cout << "the maximum element is: " << *max_element(test.begin(), test.end()) << endl<< endl;//returns the maximum value element
    cout << "the minimum element is: " << *min_element(test.begin(), test.end()) << endl << endl;//returns the minimum value element
    cout << "the summation of this vector is: "<< accumulate(test.begin(), test.end(), 0) << endl << endl;//returns the summation

    cout << "the occurrence of 13 is: " << count(test.begin(), test.end(), 13) << endl << endl;//counts the occurrence of a value


    cout << str << endl;
    next_permutation(str.begin(), str.end());//changes the string to its next permutation
    cout << str << endl;
    next_permutation(str.begin(), str.end());
    cout << str << endl;
    cout << endl;
    cout << "the vector before erasing duplicate items" << endl;
    for (itr=test.begin(); itr!=test.end(); itr++)
    {
        cout << (*itr) << "\t";
    }
    cout << endl << endl;
    test.erase(unique(test.begin(), test.end()), test.end());//erases duplicate items (works on vectors)
    cout << "the vector after erasing duplicate items" << endl;
    for (itr=test.begin(); itr!=test.end(); itr++)
    {
        cout << (*itr) << "\t";
    }
    cout << endl << endl;
}
