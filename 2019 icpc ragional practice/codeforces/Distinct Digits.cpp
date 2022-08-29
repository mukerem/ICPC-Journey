#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int c[1005], r[1005];
long long ans,MOD = 1000000007;
long long power(int n){
    if (n == 0)return 1;
    else if(n%2==0){
        long long a=power(n/2);
        return ((a%MOD) * (a%MOD))%MOD;
    }
    else{
        long long a=power(n/2);
        return (2 * (a%MOD) * (a%MOD))%MOD;
    }
}
int main(){
    for(int i=0; i<1005; i++){
        fill(grid[i], grid[i] + 1005, 'b');
    }
    int h,w;
    cin>>h>>w;
    for(int i=0; i<h; i++){
        cin>>r[i];
    }
    for(int i=0; i<w; i++){
        cin>>c[i];
    }
    /*
    int count=  0;
    for(int i=0; i<h; i++){
        for(int j = 0; j<w; j++){
            if(i> r[i] && j>c[j])
                count++;
        }
    }
    cout<<pow(2, count)<<endl;
    */
    int j;
    for(int i=0; i<h; i++){
        for(j = 0; j<r[i]; j++){

            grid[i][j] = 'c';
        }
        grid[i][j] = 'a';
    }
    for(int i=0; i<w; i++){
        for(j = 0; j<c[i]; j++){
            if(grid[j][i] == 'a'){
                cout<<0;
                return 0;
            }
            grid[j][i] = 'c';
        }
        grid[j][i] = 'a';
    }
    int cc = 0;
    for(int i=0; i<h; i++){
        for(j = 0; j<w; j++){
            if(grid[i][j] == 'b'){
                cc++;
            }
        }
    }
    cout<<power(cc);


}
