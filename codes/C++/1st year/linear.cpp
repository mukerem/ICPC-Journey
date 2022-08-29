#include<iostream>
using namespace std;

int linear(int x[], int y, int z){
    for(int i=0;i<y;i++){
    if(x[i] == z)
        return i;
    }
    return -1;
}
int main(){
    int n=10;
    int numbers[n] = {4,15,6,23,7,8,0,14,36,2};
    int k = 16;
    int index = linear(numbers, n,k);
    if(index == -1)
        cout<< k <<" is not found"<<endl;
    else
     cout<<k<<" is found at index "<<index<<endl;
}
