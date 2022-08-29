#include<bits/stdc++.h>
using namespace std;
int main(){
    int lower = 1, upper = 1000;
    string s;
    int i = 10;
    while(i--){
        int mid = (lower + upper)/2;
        cout<<mid<<endl<<flush;
        cin>>s;
        if(s == "correct")break;
        else if(s == "lower")lower = mid+1;
        else upper = mid-1;

    }
}
