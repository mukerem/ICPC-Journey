#include<iostream>
using namespace std;
int main(){
int n,m;
char a[10][10];
do{
   cin>>n;
   if(n==-1)break;
   cin>>m;
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
        cin>>a[i][j];
        for(int k=0;k<(m/2);k++)
        {
            if(a[i][k]=='#'||a[i][m-1-k]=='#'){
                a[i][k]='#';
                a[i][m-1-k]='#';
        }}
   }
 for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
        cout<<a[i][j];
        cout<<endl;
 }
}while(1);
}
