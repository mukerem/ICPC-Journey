#include <iostream>
#include <string>


using namespace std;

int main()
{
    string :: iterator itr;
    string lol = "I can not believe this";
    int n;
    string c = "believe";
    itr = lol.end();
    cout << lol.substr(6, 9)<<endl;
    //cin>>lol;
    cout << lol << endl;
    itr--;
    cout << *itr << endl;
    n = lol.find(c);
    itr = lol.begin();
    for (int i=0; i<n; i++)
    {
        itr++;
    }
    cout << *itr;
    return 0;
}
