#include <iostream>

using namespace std;

int main()
{
    int t, n, p;
    cin >> t;
    while(t-- && cin>>n) {
       int x =0, ans =0;
        while(n-- && cin >> p){
            x += p;
            if(x < 0) x =0;
            else if(x > ans) ans = x;
        }
        cout << ans << endl;
    }

    return 0;
}
