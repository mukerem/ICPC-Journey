#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a,b,x,y;
cin>>a>>b;
long long t=0,maxx;
long long c[a][b],v[a][b];
for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
    cin>>c[i][j];
    t+=c[i][j];

}
}
for (int i=0;i<a;i++){
        for (int j=0;j<b;j++)
           v[i][j]=0;
 }
 for (int i=0;i<a;i++){
        maxx=c[i][0];
        y=0;
        for (int j=1;j<b;j++){
            if(maxx<c[i][j]){
    maxx=c[i][j];
    y=j;

            }
        }
            v[i][y]=-1;


}
 for (int i=0;i<b;i++){
        maxx=c[0][i];
        x=0;
        for (int j=1;j<a;j++){
            if(maxx<c[j][i]){
    maxx=c[j][i];
    x=j;

            }
        }
            v[x][i]=-1;


}
 for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if(v[i][j]==-1)
            t-=c[i][j];
}
 }

 cout<<t;
}


