#include<iostream>
#include<algorithm>
using namespace std;

typedef long long ll;

const int si=int(1e3)+1;
int n,m;
ll a[si][si];
bool b[si][si];

int main()
{
    cin>>n>>m;
    ll sum=0;
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            cin>>a[i][j];
            sum+=a[i][j];

        }
    }

    for (i=0; i<n; i++)
    {
        int k, ma =0;
        for (j=0; j<m; j++)
            if(a[i][j] > ma){
                ma=a[i][j];
                k =j;
            }
        sum -=ma;

        b[i][k]=1;
    }
    for (int i=0; i<m; i++)
    {
        int k, ma =0;
        for (j=0; j<n; j++)
            if(a[j][i] > ma){
                ma=a[j][i];
                k =j;
            }
        if(!b[k][i])sum -=ma;

    }


    cout<<sum<<endl;;
}


