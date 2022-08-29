#include<iostream>
#include<cmath>
using namespace std;
int arr [] = {-1,1,-1,2,3,4,-1,5,-1,6};
void answer(long long n){
    long long ans = 0,temp = 1;
    while(n>0){
        int r= n%10;
        ans += temp*arr[r];
        n = n/10;
        temp *= 6;
    }
    cout<<ans-1<<endl;
}
int main(){
 long long a;
while(cin>>a&&a!=-1){
        answer(a);

}
}


