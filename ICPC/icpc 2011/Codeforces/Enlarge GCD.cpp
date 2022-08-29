#include<iostream>
#include<algorithm>
using namespace std;
int num[300005];
int n;
int search_num(int x,int l,int r){
    if(l>r) return 0;
    int m = (l+r)/2;
    if(num[m] == x) return m;
    else if(num[m]<x && num[m+1]>x) return m+1;
    else if(num[m] < x)  search_num(x,m+1,r);
    else  search_num(x , l, m-1);
}
int main(){
    long long x,y;
    cin>>n;
    cin>>num[0];
    int gcd = num[0];
    for (int i=1;i<n;i++){
        cin>>num[i];
        gcd = __gcd(gcd, num[i]);
    }
    sort(num,num+n);
    if(num[0] == num[n-1]){
            cout<<-1<<endl;
        return 0;
    }
    int minn = 100000000;
    for(int i=2*gcd;i<=num[n-1];i += gcd){
        int k = search_num(i,0,n-1);
        int c = k;
        //cout<<k<<" "<<i<<endl;
        if(c>=minn)continue;
        for(int j = k;j<n;j++){
            if(num[j] % i != 0){
                c++;
            }
            if(c>=minn)break;
        }
        if(c == 1){
            cout<<1<<endl;
            return 0;
        }
        minn = min(minn , c);
    }
    if(minn == n || minn == n-1)
        cout<<-1<<endl;
    else
        cout<<minn<<endl;

}


