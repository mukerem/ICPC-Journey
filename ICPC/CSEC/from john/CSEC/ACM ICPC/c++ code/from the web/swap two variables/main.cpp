#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <string> test;
    int b = 0;
    test.push_back("yohanes");
    while (test[0][b] != NULL)
    {
        b++;
    }
    cout<<b<<endl;
    //cout<<sizeof(test[0])<<endl ;
    string a;
    a = test[0];
    swap(a[0], a[1]);
    cout<<a[0]<<"\t"<<a[1]<<endl;


}
