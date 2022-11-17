#include <bits/stdc++.h>
using namespace std;
#define MAX 501
int rec[MAX][MAX];
int main(){

  for(int i=1; i<MAX; i++){
   rec[i][1] = i;
   rec[1][i] = i;
   rec[i][i] = 1;
   }
   int m = INT_MAX;
   for(int i = 2; i<MAX; i++){
     for(int j=i+1; j<MAX; j++){
       m = INT_MAX;
       for(int k = 1; k<=j/2; k++){
          m = min(m, rec[max(k, i)][min(k, i)] + rec[max(j-k, i)][min(j-k, i)]);
       }
       for(int k = 1; k<=i/2; k++){
          m = min(m, rec[max(k, j)][min(k, j)] + rec[max(i-k, j)][min(i-k, j)]);
       }
       //cout<<i<<" "<<j<<" "<<m<<endl;
       rec[j][i] = m;

     }
   }
   /*
   for(int i=1; i<20; i++){
    for(int j = 1; j<20; j++)cout<<rec[i][j]<<" ";cout<<endl;
   }

*/
   int a,b;
   cin>>a>>b;
   if(a<b)swap(a,b);
   cout<<rec[a][b]-1;
}
