#include<bits/stdc++.h>
using namespace std;
vector<int> subset;
int n=4;
void search(int k)
{
    if (k == n)
    {
        for(auto x: subset)cout<<x<<" ";
        cout<<endl;
    }
    else
    {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}
int main()
{
    search(0);

}

