#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n != -1){
        if(ceil(sqrt(n)) == floor(sqrt(n))){
            printf("%d^%d", (int)sqrt(n), (int)sqrt(n));
            
        } else {
            vector<int> cont;
            while(n >= 1){
                int l = (int)sqrt(n);
                cont.push_back(l); 
                n -= l*l;
                // cout << n << " ";
            }
            for(int i=0; i<cont.size(); i++) cout << cont[i] << "^" << cont[i] << " ";
        }
        cout << endl;
    }  
}