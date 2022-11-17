// Time: 2019-11-20 20:54:53
// title: Where's My Internet??
// language: C++


#include<bits/stdc++.h>
using namespace std;
#define N 200005
int Arr[N], siz[N];
int root (int i)
{
    while(Arr[ i ] != i)
    {
        Arr[ i ] = Arr[ Arr[ i ] ] ;
        i = Arr[ i ];
    }
    return i;
}

void weighted_union(int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);
    if(siz[root_A] < siz[root_B ])
    {
        Arr[ root_A ] = Arr[root_B];
        siz[root_B] += siz[root_A];
    }
    else
    {
        Arr[ root_B ] = Arr[root_A];
        siz[root_A] += siz[root_B];
    }

}
bool find(int A,int B)
{
    if( root(A)==root(B) )       //if A and B have same root,means they are connected.
        return true;
    else
        return false;
}
//modified initialize function:
void initialize(int n)
{
    for(int i = 1; i<=n; i++)
    {
        Arr[ i ] = i ;
        siz[ i ] = 1;
    }
}

int main(){

    int n,q,x,y,a;

    cin>>n>>q;
     initialize(n);
     for(int i=0;i<q;i++){
        cin>>x>>y;
        weighted_union(x,y);
     }
     map<int,int>m;
     int b = root(1);
     bool ok=true;
     for(int i=1;i<=n;i++){
        if(root(i)!=b)
            cout<<i<<endl,ok=false;

     }
     if(ok)cout<<"Connected";
}
