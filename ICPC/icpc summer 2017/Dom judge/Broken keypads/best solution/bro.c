
#include<stdio.h>
#include<math.h>
int arr [] = {-1,1,-1,2,3,4,-1,5,-1,6};
void answer(long long n){
    long long ans = 0,temp = 1;
    while(n>0){
        int r= n%10;
        ans += temp*arr[r];
        n = n/10;
        temp *= 6;
    }

    printf("%d\n", ans-1);
}
int main(){
 int a;
while(1){
        scanf("%d", &a);
        if (a == -1) break;
        //printf("%d\n", a);
        answer(a);

}
return 0;
}
