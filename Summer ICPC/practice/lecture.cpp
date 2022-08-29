#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum(0);
    vector<int> x(10,5);
    for(auto a:x)
        cout<<a<<" ";
    auto p = x.begin();
    cout<<sum<<" "<<*p;
}
