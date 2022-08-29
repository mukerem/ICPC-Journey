#include <iostream>


using namespace std;
#define forn(i, n) for(int i=0;i<n;i++)
#define sz(n) n.size()

void parmut(string M, string L){
    if(sz(L) > 0){
        forn(i, sz(L)){
            parmut(M + L[i],L.substr(0, i) + L.substr(i + 1));

        }
    }
    else
        cout << M << endl;
}

int main()
{

    int t;cin>>t;
    int c=1;
    while(t--){
    string L; cin>>L;
    cout<<"Case # "<<c++<<":"<<endl;
    parmut("", L);

    }
    return 0;
}
