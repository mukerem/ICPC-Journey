#include <iostream>

using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

int main()
{
    string mon[] = {":\nJan:", "Feb:","Mar:","Apr:","May:","Jun:","Jul:","Aug:","Sep:","Oct:","Nov:","Dec:"};
    int cmon[12];
    int n, d, m, y, c=1;
    while(cin >>n && n){
        forn(i,12)cmon[i]=0;
        forn(i, n){
            cin>>d>>m>>y;
            cmon[m-1]++;
        }
        cout << "Case #" << c++;
        forn(i,12){
            cout << mon[i];
            forn(j, cmon[i]) cout<<"*";
            cout<<endl;
        }
    }
    return 0;
}
