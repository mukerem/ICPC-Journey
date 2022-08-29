#include<bits/stdc++.h>
using namespace std;
bool pyt[1000005];
int main(){
    int k;
    while(cin>>k){
            for(int i=0;i<=k;i++)pyt[i]=0;
            long long ans = 0;
            for(int i=1;i<sqrt(k);i++){
                for(int j=i+1;j<=sqrt(k-i*i);j += 2){
                    if(__gcd(i,j) == 1){
                        int a=2*i*j;
                        int b=j*j-i*i;
                        int c = i*i+j*j;
                        ans++;
                        for(int n=1;n<=k/c;n++){
                            pyt[n*a] = 1;pyt[n*b] = 1;pyt[n*c] = 1;
                        }
                    }
                }
            }

       long long part = 0;
        for(int i=1;i<=k;i++){
                //cout<<i<<" "<<pyt[i]<<endl;
                if(!pyt[i])part++;
        }
           cout<<ans<<" "<<part<<endl;
    }
}
