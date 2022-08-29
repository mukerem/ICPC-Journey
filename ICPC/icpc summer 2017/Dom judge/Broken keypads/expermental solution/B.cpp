#include<bits/stdc++.h>
using namespace std;
ofstream infile("e.in");
ofstream outfile("e.out");
int arr [] = {-1,1,-1,2,3,4,-1,5,-1,6};
void answer(long long n){
    long long ans = 0,temp = 1;
    while(n>0){
        int r= n%10;
        ans += temp*arr[r];
        n = n/10;
        temp *= 6;
    }
    outfile<<ans-1<<endl;
}
bool check(long long x){
            if(x == 0)return true;
            while(x>0){
                int r=x%10;
                if (r==0||r==2||r==6||r==8)return true;
                x=x/10;
            }
return false;
}
int main(){
    long long b;
    srand(time(0));
    int k=1000;
    while(k-->0){
        do{
            b=((long long) rand()* (long long)rand()* (long long)rand()* (long long)rand());

        }while(check(b));
        //cout<<b<<endl;
        //cin>>a;
        infile<<b<<endl;
        answer(b);

    }
}


