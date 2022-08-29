#include<bits/stdc++.h>
using namespace std;
int l[1005] , r[1005] ,n ,c, m , ch[1005] , ans[1005] , cand;
int main(){
    cin>>n;
    for(int i = 0;i<n;i++) cin>>l[i];
    for(int j = 0 ;j<n;j++) cin>>r[j];

    cand = n;
    m = 0;
    while(m < n){
        int c = 0;
        for(int i = 0;i<n;i++){
            if(l[i] == 0 && r[i] == 0){
                ch[c++] = i;
                //cout<<i<<endl;
            }

        }

        if(!c){
            cout<<"NO"<<endl;
            return 0;
        }
        int x = ch[0] ;
        int y = ch[c-1];
        for(int i = x + 1;i<n ; i++) l[i]--;
        for(int i = 0;i<y ; i++) r[i]--;
        for(int i = 0;i<c;i++){
            l[ch[i]] = -1;
            r[ch[i]] = -1;
            ans[ch[i]] = cand;
        }
        cand--;
        m += c;

//        for(int i = 0;i<n;i++)cout<<l[i]<<" ";
//        cout<<endl;
//        for(int i = 0;i<n;i++)cout<<r[i]<<" ";
//        cout<<endl;
//        cout<<endl;
    }
    if (cand<0) {
            cout<<"NO"<<endl;
            return 0;
        }
    cout<<"YES"<<endl;
    for(int i = 0;i<n;i++)cout<<ans[i]<<" ";
}
