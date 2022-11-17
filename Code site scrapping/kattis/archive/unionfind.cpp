// Time: 2019-11-27 15:16:33
// title: Union-Find
// language: C++


#include<bits/stdc++.h>
using namespace std;
#define N 1000005
int Arr[N];
int root (int i)
{
    if (Arr[ i ] == i)return i;
    Arr[i]=root(Arr[ i ]);
    return Arr[i];
}

void weighted_union(int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);

        Arr[ root_A ] = root_B;


}
bool find(int A,int B)
{
    if( root(A)==root(B) )       //if A and B have same root,means they are connected.
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q,x,y,a;
    char s;
    cin>>n>>q;
    iota(Arr, Arr+n+1,0);
    for(int i=0; i<q; i++)
    {
        cin>>s>>x>>y;
        if(s == '?')
        {
            if(find(x,y))cout<<"yes\n";
            else cout<<"no\n";
        }
        else
            weighted_union(x,y);


    }

}
