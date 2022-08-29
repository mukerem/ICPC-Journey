#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k = 2;
        while(n>=k){
            if(n%k == 0){
                cout<<0<<endl;
                break;
            }
            n = n - n/k;
            k++;
            //cout<<n<<" "<<k<<endl;
        }
        if(n<k)
        cout<<1<<endl;
    }
}

