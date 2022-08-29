#include <iostream>

using namespace std;
#define forn(i, n) for(int i=0;i<n;i++)

int main()
{
    int n;
    while(cin >> n && (n+1)){

        int k=n-1, x =-1;
        forn(i,n){
            int l=k;
            forn(j, k) cout<<".";
            cout<<"A";
            if(i == n/2)
                forn(j, x) cout<<"A";
            else
                forn(j, x) cout<<".";
            if(i > 0)
                cout<<"A";
            forn(j, l) cout<<".";
            cout<<endl;
            k--;x+=2;
        }
    }
    return 0;
}
