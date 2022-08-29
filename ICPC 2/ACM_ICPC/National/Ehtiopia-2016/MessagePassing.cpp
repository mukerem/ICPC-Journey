#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   long long d, t;
    cin>>d>>t;
    long long arr[t];arr[0]=1, arr[1]=1;
    for(int i=2; i<=t; i++)
    {
        arr[i] = arr[i-1]*2;
        if(i > d)arr[i]-=arr[i-d-1];
    }
    cout<<arr[t]%31991<<endl;
    return 0;
}

