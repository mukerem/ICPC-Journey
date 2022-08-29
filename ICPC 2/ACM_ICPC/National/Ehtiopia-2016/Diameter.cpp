#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;cin>>n;
    int x[n+5],y[n+1];
    for(int i=0; i<n;i++)cin>>x[i]>>y[i];
    int j,k,z = INT_MAX,zz = INT_MIN;
    for(int i=0; i<n;i++)
    {
       if(x[i]>zz){
           zz = x[i];j=i;
       }
        if(x[i]<z){
            z = x[i];k=i;
        }
    }
    double d = sqrt(pow(abs(x[k]-x[j]),2) + pow(abs(y[k]-y[j]),2));
    z = INT_MAX,zz = INT_MIN;
    for(int i=0; i<n;i++)
    {
       if(y[i]>zz){
           zz = y[i];j=i;
       }
        if(y[i]<z){
            z = y[i];k=i;
        }
    }
    double d1 = sqrt(pow(abs(x[k]-x[j]),2) + pow(abs(y[k]-y[j]),2));
    if(d<d1)
        cout<<fixed<<setprecision(4)<<d;
    else
        cout<<fixed<<setprecision(4)<<d1;

    return 0;
}

