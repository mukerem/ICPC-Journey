// Time: 2019-10-02 19:54:50
// title: A Prize No One Can Win
// language: C++


#include<bits/stdc++.h>
using namespace std;
int c[1000005];
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=0; i<a; i++){
        cin>>c[i];
    }
    sort(c, c+a);
    int k = 1;
    for(; k<a; k++){
        if(c[k] + c[k-1] > b){
            break;
        }
    }
    cout<<k;
}
