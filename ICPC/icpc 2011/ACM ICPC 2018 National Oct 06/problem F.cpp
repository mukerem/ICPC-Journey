#include <iostream>

using namespace std;

int main()
{
    int w,n,c=0;
    cin>>w>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int j=0;
    for(int k=0;k<n;k++)
    {
            j++;

        if(w==c)
        {
            break;
        }
    for(int i=0; i<n; i++)
    {
        if(n>=4+i)
        {

            for(j;j<4+i;j++)
            {
                c=c+a[j];

            }
        if(w==c)
        {
            cout<<"YES"<<endl;
            break;
        }
        }
    }
    }

 if(c!=w)
        cout<<"NO"<<endl;
    return 0;
}
