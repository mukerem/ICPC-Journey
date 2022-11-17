// Time: 2019-11-26 19:06:37
// title: Climbing Worm
// language: C++


#include<iostream>
using namespace std;
int main(){
    
    int a,b,h;
    cin>>a>>b>>h;
    int s = 0, c=0;
    while(s<h){
        c++;
        s += a;
        if(s>= h)break;
        s -= b;
        
    }
    cout<<c<<endl;
}