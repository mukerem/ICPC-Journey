#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    //iota(arr, arr+8, 23);
    cout << "the array contains:" << endl;
    for (int i=0; i<8; i++)
    {
        cout << arr[i] << " ";
    }

    none_of(arr, arr+8, [](int x){return x<0; })?
            cout << "No negative elements" :
                cout << "there are negative elements";

    cin.get();
    return 0;
}
