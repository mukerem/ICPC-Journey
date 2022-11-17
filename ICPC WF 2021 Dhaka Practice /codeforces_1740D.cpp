#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    long long y = (n-1) * (m-1), z = k;
    int a[k];
    vector<bool>b(k+1, false);

    for(int i=0; i<k; i++)cin>>a[i];
    for(int i=0; i<k; i++){
         int x = a[i];
         if(x == z){
             z--;
             while(b[z]){z--;y++;}
             continue;
         }
         if(y == 0){cout<<"TIDAK\n";return;}
         b[x]=true;
         y--;
    }
    cout<<"YA\n";

}
int main(){
int t;
cin>>t;
while(t--)solve();
}
