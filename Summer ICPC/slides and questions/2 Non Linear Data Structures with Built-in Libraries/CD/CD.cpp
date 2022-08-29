#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> cd;
    int a,b,x;
    while (true){
        cin>>a>>b;
        if(a == 0 and b == 0) break
        for(int i=0; i< (a+b) ; i++){
            cin>>x;
            cd.insert(x);
        }
        cout<<a+b-cd.size()<<endl;
    }
}
