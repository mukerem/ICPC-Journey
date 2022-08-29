#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define len(x) x.size()
#define inf 999999999

typedef long long ll;
const int N = 100000;
int arr[255][2];
bool visited[255];
int a=0, b=0, n,m,indexx, x,y;

int main(){
   
   int n;
   cin >> n;
   for(int i = 0; i < n; i++) cin >> arr[i][0]>>arr[i][1];
   long long tot = 0;
   for(int k =0; k < n; k++){
      m = 0;x=0;y=0; indexx=-1;
      for(int i=0 ;i<n; i++){
         if(visited[i])continue;
         if(m < arr[i][0] + arr[i][1]){
            m = arr[i][0] + arr[i][1];
            indexx = i;
         // }
         // else if(m == arr[i][0]){
         //    if(y < arr[i][1]){
         //       m = arr[i][0];
         //       indexx = i;
         //       x = m; y = arr[i][1];
         //    }
         }

         // if(m < arr[i][1]){
         //    m = arr[i][1];
         //    indexx = i;
         //    x = arr[i][0]; y = m;
         // }
         // else if(m == arr[i][1]){
         //    if(x < arr[i][0]){
         //       m = arr[i][1];
         //       indexx = i;
         //       x = arr[i][0]; y = m;
         //    }
         // }
      }
      visited[indexx]=true;
      x = arr[indexx][0]; y = arr[indexx][1];
      if(a + x <  b+y) a += x;
      else if(a + x >  b+y) b += y;
      else {
         if(a < b)b += y;
         else a += x;
      }
   }
   cout<<max(a,b);


    return 0;
}