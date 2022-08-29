#include <iostream>

using namespace std;

int main()
{
    int n,p,k;
    while (1)
    {
        cin>>n;
        if(n==-1)
            break;
        cin>>p>>k;
        if(p-k>1)
            cout<<"<< ";
        for (int i = max(1,p-k); i <= min(p+k,n); i++)
        {
            if(i==p)
                cout<<"(";
            cout<<i;
            if(i==p)
                cout<<") ";
            else
                cout<<" ";
        }
        if(p+k<n)
            cout<<">>";
        cout<<endl;
    }
}
