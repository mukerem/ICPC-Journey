#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, e = 1;
    int dd, mm, yy;
    int birthday[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    while (true)
    {
        cin>>n;
        if (n == 0)
        {
            return 0;
        }
        for (int i=0; i<n; i++)
        {
            cin>>dd>>mm>>yy;
            birthday[mm-1]++;
        }
        cout<<"Case #"<<e<<endl;
        for (int i=0; i<n+2; i++)
        {
            cout<<months[i]<<":";
            for (int j=0; j<birthday[i]; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }

    }


}
