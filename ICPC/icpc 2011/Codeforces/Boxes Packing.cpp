#include<iostream>
#include<cmath>
using namespace std;
int m,k,n;
int obj[200005];
int main(){
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        cin>>obj[i];
    }
    int c = 0, p=0, sum = 0;
    for(int i=n-1;i>=0;--i){
        if (c == m) break;
        if(obj[i] > k) continue;
        else if(sum + obj[i] <= k){
            sum += obj[i];
            p++;
        }
        else {
            sum = obj[i];
            c++;
            if(c<m) p++;
        }
    }
    cout<<p<<endl;
}


