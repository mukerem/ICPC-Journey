import java.util.Scanner;
class Broken
{
static int arr [] = {-1,1,-1,2,3,4,-1,5,-1,6};
static void answer(int n){
    int ans = 0,temp = 1;
    while(n>0){
        int r= n%10;
        ans += temp*arr[r];
        n = n/10;
        temp *= 6;
    }
	System.out.println(ans-1);
}

public static void main(String[] args) 
{
int a;
Scanner s=new Scanner(System.in);
a=s.nextInt();
while(a!=-1){
    answer(a);
    a=s.nextInt();	
}

}
}