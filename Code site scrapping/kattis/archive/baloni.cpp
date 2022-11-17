// Time: 2019-08-19 20:13:02
// title: Baloni
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    int n, x;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int sum = 0, h, z = n;
    while(n)
    {
        for(auto u: v){
            if(u != -1){
                h = u;
                break;
            }
        }
            for(int u = 0; u<z; u++){
                if(v[u] == h){
                    n--;
                    v[u] = -1;
                    h--;

                }
            }



        sum++;
    }
    cout<<sum<<endl;
}
