#include<iostream>
#include<algorithm>
using namespace std;

int binary(int x[], int y, int z){
    int left=0,right=y-1, mid;
    while(left<=right){
        mid  = (left+right)/2;
        if(x[mid] == z)
            return mid;
        else if(x[mid] < z)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main(){
    int n=10;
    int numbers[n] = {4,15,6,23,7,8,0,14,36,2};
    sort(numbers, numbers+n);
    int k = 6;
    int index = binary(numbers, n,k);
    if(index == -1)
        cout<< k <<" is not found"<<endl;
    else
     cout<<k<<" is found at index "<<index<<endl;
}
