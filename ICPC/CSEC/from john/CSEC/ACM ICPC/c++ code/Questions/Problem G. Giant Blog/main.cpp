#include <iostream>

using namespace std;

int main()
{
    int n, p, k;
    while (cin>>n && n != -1)
    {
        cin>>p>>k;
        if (p-k>1)
        {
            cout<<"<< ";
        }
        for (int i=k; i>0; i--)
        {
            if (p-i > 0)
            {
                cout<<p-i<<" ";
            }

        }
        cout<<"("<<p<<") ";
        for (int i=0; i<k; i++)
        {
            if (p+i+1 <= n)
            {
                cout<<p+i+1<<" ";
            }
        }
        if (p+k<n)
        {
            cout<<" >>"<<endl;
        }
    }
}
