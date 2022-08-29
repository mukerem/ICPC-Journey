#include<bits/stdc++.h>
using namespace std;
int main(){
    int t1[] = {1,2,3,4,5,6,7,9,10};
    int t2[] = {1,2,3,4,5,6,7,9,10};
    vector<int> v1(t1, t1+10);
    vector<int> v2(t2, t2+10);
    vector<int> v3(10);
    transform(v1.begin(), v1.end(),v2.rbegin(), v2.rend(), minus<int>);
    for(auto c:v3)cout<<c<<" ";
 }
