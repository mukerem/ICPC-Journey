#include<iostream>
using namespace std;
struct point{
    int x,y;
    int x(x), y(y);
    bool operator< (point &p){
        if(p.x == x ) return y<p.y;
        else return false;
    }
};
int main(){
    int a,b, t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        cout<<a%b<<endl;
    }
}
