// Time: 2019-11-22 21:18:25
// title: Guess the Number
// language: C++


#include<bits/stdc++.h>
using namespace std;
int main(){
    int lower = 1, upper = 1000, mid;
    string s;
    int i = 10;
    while(i--){
        mid = lower +(upper - lower)/2;
        cout<<mid<<endl<<flush;
        cin>>s;
        if(s == "lower") upper = mid - 1;
        else if(s == "higher")lower = mid+1;
        else break;
    }
}
