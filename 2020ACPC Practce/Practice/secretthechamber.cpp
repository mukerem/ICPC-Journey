#include<bits/stdc++.h>
using namespace std;
int Arr[26], sizee[26];

void initialize(int N){
    for(int i = 0; i<N; i++){
        Arr[ i ] = i ;
        sizee[ i ] = 1;
    }
}
int root(int i){
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
void set_union(int A,int B){
    int root_A = root(A);
    int root_B = root(B);
    if(sizee[root_A] < sizee[root_B ]){
        Arr[ root_A ] = Arr[root_B];
        sizee[root_B] += sizee[root_A];
    }
    else{
        Arr[ root_B ] = Arr[root_A];
        sizee[root_A] += sizee[root_B];
    }
}
int main(){
    initialize(26);
    int n,t, j;
    string x,y;
    char a,b;
    cin>>t>>n;

    for(int i=0; i<t;i++){
        cin>>a>>b;
        set_union(a-97, b-97);
    }
    //for(auto i: Arr)cout<<i<<" ";
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x.size() != y.size()){
            cout<<"no"<<endl;
            continue;
        }
        for(j = 0; j<x.size();j++){
            //cout<<x[j]<<" "<<y[j]<<" "<<isTheSameSet(x[j]-97, y[j]-97)<<endl;
            if(!isTheSameSet(x[j]-97, y[j]-97)){
                cout<<"no"<<endl;
                break;
            }
        }
        if(j == x.size())cout<<"yes"<<endl;
    }
}
