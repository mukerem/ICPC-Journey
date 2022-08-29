#include<iostream>
using namespace std;
int main(){
    int m,n,l,w;
    long long t=0,x;
    cin>>n>>l>>m>>w;
    int  c[m][n],d[m][l];
    long long p[m][n-l+1];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
    cin>>c[i][j];

}
for (int i=0;i<m;i++){
        for (int j=0;j<l;j++)
    cin>>d[i][j];

}
for (int i=0;i<m;i++){

for (int j=0;j<n-l+1;j++)
    cin>>d[i][j];

}
for (int k=0;k<n-l+1;k++){
        x=0;
    bool q=true;
    for (int i=0;i<m;i++){
    for (int j=0;j<l;j++){
    x+=c[i][k+j]*d[i][j];
    if(x>w){
        break;
        q=false;
    }
    }
    if(!q)break;
    }
if(x>w)t++;
}
cout<<t;
}

