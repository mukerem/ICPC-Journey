#include <iostream>

using namespace std;

int main()
{
    string data;
    cout<<"Please input the data to be Encripted: ";
    cin>>data;
    cout<<"\nthe encripted data is: ";
    for (int i=0; i<sizeof(data); i++)
    {
        data[i] += 3;
    }
    cout<<data;
}
