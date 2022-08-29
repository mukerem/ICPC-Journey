#include<iostream>
using namespace std;
int x[2][2];
void multiplication(int a[2][2], int b[2][2] , int c[2][2]){
    c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
}

int ** fib(int matrix[2][2], int n){
    if (n == 1) return &(&matrix);

    else{
        c = fib(int matrix[2][2], int n/2);
        return multiplication(c,c,x);

    }
}
int main(){
    int x[2][2] = {{1,1},{1,0}};
    int y[2][2];
    multiplication(x,x,y);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<y[i][j]<<" ";
        }
        cout<<endl;
    }
}
