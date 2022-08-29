#include<bits/stdc++.h>

using namespace std;

vector<int>v;
int main() {

    int n, final_;
    while(cin >> n && n !=0){
       if(n == 1 || n == 2) cout << n << endl;
       else{
        for(int i = 1; i < n; i++){
            if(n == pow(2,i)){
                v.push_back(n);
                break;
            } else if((n-pow(2, i)) * 2 > 0){
                final_ = (n-pow(2, i)) * 2;
                v.push_back(final_);
            }
            //if(!final_){
            //}
        }
          cout << v[v.size() - 1] << endl;
       }
    }
    return 0;
}
