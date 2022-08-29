
#include<bits/stdc++.h>
using namespace std;
long long** mat =new long long*[2];
long long** identity =new long long*[2];

long long** matrix_product(long long** a,long long** b){
    long long** result = new long long*[2];
    for(int i=0;i<2;i++)  result[i] = new long long[2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j] = 0;
            for(int k=0;k<2;k++) result[i][j] += a[i][k]*b[k][j];
        }
    }
    return result;
}
long long** fibonaci(long long** a,int n){
    if(n == 0) return identity;
    long long **res = fibonaci(a,n/2);

    res = matrix_product(res,res);
    if(n%2 == 1)res = matrix_product(res,a);
    return res;
}
int main(){

      for(int i=0;i<2;i++){
        mat[i] = new long long[2];
        identity[i] = new long long[2];
    }
    mat[0][0] = 0;mat[0][1] = 1;mat[1][0] = 1;mat[1][1] = 1;
    identity[0][0] = 1;identity[0][1] = 0;identity[1][0] = 0;identity[1][1] = 1;

    int n;
    cin>>n;
    long long** ans = fibonaci(mat,n);
    cout<<ans[0][1]<<endl;
//    for(int i=0;i<2;i++){
//        for(int j=0;j<2;j++)cout<<ans[i][j]<<"  ";
//        cout<<endl;
//    }
}






