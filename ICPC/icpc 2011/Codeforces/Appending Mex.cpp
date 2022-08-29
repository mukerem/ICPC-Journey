#include<bits/stdc++.h>
using namespace std;
int x, n , index = -1;
int maxx = -1;
int main(){
    cin>>n;
    bool ans = 1;
    for(int i = 0;i<n;i++){
        cin>>x;
        if (ans){

            if(maxx+1 <  x) {
                ans = 0;
                index = i;
            }
            maxx = max(maxx , x) ;
        }

    }
    if(ans) cout<<-1<<endl;
    else cout<<index + 1<<endl;
}
