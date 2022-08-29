#include<iostream>
using namespace std;
int check(int i){
    int c=1;
    while (i!=1){
        if (i%2==0)
                i/=2;
        else
                i= i*3+1;
        c++;
    }
    return c;
}
int main(){
    int n,m;
    while(cin>>n>>m){
        int maxx=0;

        for (int i=min(n,m);i<=max(n,m);i++){
            maxx =max(maxx, check(i));
        }
        cout<<maxx<<endl;
    }
}

