#include<bits/stdc++.h>
using namespace std;
int isMeera(int n){
    int divisor = 0, i;
    for(i = 2; i*i < n; i++){
         if(n%i == 0)divisor += 2;
    }
    if(i*i == n)divisor++;
    return n%divisor == 0;
}

int isOddHeavy(int a[], int n){

    int max_even = INT_MIN, min_odd = INT_MAX;
    for(int i=0; i<n; i++){
     if(a[i] % 2 == 0){
         if(i%2 == 0)return 0;
         max_even = max(max_even, a[i]);
     }
     else{
         if(i%2 == 1)return 0;
         min_odd = min(min_odd, a[i]);
     }
    }
    if(min_odd == INT_MAX) return 0;
    if(max_even == INT_MIN) return 1;
    if (min_odd < max_even) return 0;
    return 1;
}

int main(){
 int a[5] = {11, 4, 9, 2, 3};
    int n = sizeof(a) / sizeof(int);

 cout<<isOddHeavy(a, n);
}
