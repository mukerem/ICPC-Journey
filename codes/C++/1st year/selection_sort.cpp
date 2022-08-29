#include<iostream>
using namespace std;

void bubble(int x[], int y){
    for(int i=0;i<y;i++){
        for(int j=0;j<y-i-1;j++){
            if(x[j] > x[j+1]){
            int temp = x[j];
            x[j] = x[j+1];
            x[j+1] = temp;
            }
        }

    }
}


int main(){
    int n=10;
    int numbers[n] = {4,15,6,23,7,8,0,14,36,2};
    bubble(numbers, n);
    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }
}
