#include<bits/stdc++.h>
using namespace std;
int main()
{
/*
    int n = 10, value = 4;
    int adj[10][20] ;
    int abc[30]= {0};
    for(auto i: adj)
        fill(i, i + 20, 6);
    //fill(abc, abc + 10, 0);

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<20; j++)
            cout<<adj[i][j]<<" ";
        cout<<endl;
    }
    for(auto i: abc)cout<<i<<" ";
    fill(adj, adj+n, value); // for 1 dimensional array
    for(auto i: adj)
        fill(i, i + n, value); // for 2 dimensional array
        */
    //cout<<setfill(0)<<setw(10)<<55;//000000000055
    cout<<setbase(16)<<255;// ff only for base 8 and 16
}

/*
int root(int Arr[ ],int i){
    while(Arr[ i ] != i)
        i = Arr[ i ];
    return i;
}
bool isTheSameSet(int A,int B){
    if( root(A)==root(B) )
        return true;
    else
        return false;
}
void union(int Arr[ ],int size[ ],int A,int B){
    int root_A = root(A);
    int root_B = root(B);
    if(size[root_A] < size[root_B ]){
        Arr[ root_A ] = Arr[root_B];
        size[root_B] += size[root_A];
    }
    else{
        Arr[ root_B ] = Arr[root_A];
        size[root_A] += size[root_B];
    }
}
*/

#include<iostream>

using namespace std;
int main(){
    int a,b,c;
    while(cin>>a>>b){
        c = a*b*2;
        cout<<c<<endl;
    }
}
