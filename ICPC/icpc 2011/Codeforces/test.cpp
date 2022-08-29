#include <iostream>

using namespace std;

int main()
{
    long int a,b,c;

    while(1)
    {
        cin>>a;
        if(a==-1) break;
        cin>>b>>c;
        cout<<(a+b)%c<<" "<<(a-b)%c<<" "<<(a*b)%c<<endl;
    }
    return 0;
}
