#include <iostream>
#include <vector>

using namespace std; //do it with iterators

int main()
{
    vector <int> numbers;
    vector <int>::iterator itr;
    int t, n, l, sum = 0, tempSum = 0;
    for (int i=0; i<t; i++)
    {
        cin>>n;
        for (int j=0; j<n; j++)
        {
            cin>>l;
            numbers.push_back(l);
        }
        for (int j=0; j<n; j++)
        {
            for (itr; itr!=numbers.end(); itr++)
            {
                tempSum += (*itr);
            }
            if (tempSum > sum)
            {
                sum = tempSum;
            }
            l++;
        }
        cout<<sum<<endl;
    }


}
