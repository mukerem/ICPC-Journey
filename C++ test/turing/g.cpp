#include<bits/stdc++.h>
using namespace std;

int f(int &x, int c){
    c = c-1;
    if(c == 0)return 1;
    x += 1;
    return f(x, c) * x;
}
int main(){
    int a=  5;
    cout<<f(a,a);

    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout<<ltm->tm_year + 1900 - 2010<<endl;

    char aa[] = {'w', 'e', '\0'};
    cout<<aa;
}
