#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    for (int i = 2;i<n;i++)
        if (n%i == 0)
            return false;
    return true;
}

int main(){
int x;
cin>>x;
int last = 2;
int ans = 0;
while (x>1){
    for (int i = last;i<=x;i++){
        if(x%i == 0){
            bool t = prime(i);
            if (t){
                ans++;
                x = x/i;
                last = i;
                break;
            }
        }
    }

}
cout<<ans;
}
