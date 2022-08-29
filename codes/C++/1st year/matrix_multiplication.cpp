#include<iostream>
using namespace std;
int main(){

    int a[3][4], b[4][4], c[3][4];
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++)
            cin>>a[i][j];
    }
      for (int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            cin>>b[i][j];
    }
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            int sum = 0;
            for(int k=0;k<4;k++){
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<c[i][j]<<"   ";
        }
    }
    cout<<endl;
}
