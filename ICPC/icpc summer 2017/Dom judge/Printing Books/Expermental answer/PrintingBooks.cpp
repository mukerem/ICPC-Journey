
#include<bits/stdc++.h>
using namespace std;
long long n,x,t;
ofstream infile("c.in");
ofstream outfile("c.out");
int findDigit(long long num){
    long long int maxx = 10,minn = 1;
    for(int i=1;;i++){
        if(minn<= num &&  num<maxx){
            //cout<<minn<<" "<<maxx<<" "<<i<<endl;
            return i;
        }
        maxx *= 10;minn *= 10;
    }
    return -1;
}
int main(){
    t=1000;
    infile<<t<<endl;
    for(int i=0;i<t;i++){
        n=((long long )(rand()%100000)*(long long )(rand()%100000)*(long long )(rand()%100000))%100000000000000+1;
        x=((long long ) (rand()%100000)*(long long )(rand()%100000)*(long long )(rand()%100000))%1000000000000+1;
        infile<<n<<" "<<x<<endl;
        int digit = findDigit(x);
        long long sum = 0, maxx_digit = 1;
        for(int k=0;k<digit;k++){
            maxx_digit *= 10;
        }
        long long first = digit * (maxx_digit - x);
        //cout<<maxx_digit<<" "<<digit <<" "<<first;
        if (first >= n){
            //cout<<digit<<" "<<maxx_digit<<" "<<first<<" "<<n<<endl;
            if(n%digit == 0){
                outfile<<n/digit<<endl;
            }
            else outfile<<-1<<endl;
        }
        else{
            digit++;
            sum += maxx_digit - x;
            n = n - first;
            while(true){
                maxx_digit *=  10;
                first = digit * maxx_digit;
                if (first >= n){
                    if(n%digit == 0){
                        outfile<<sum + n/digit<<endl;
                    }
                    else outfile<<-1<<endl;
                    break;
                }
                sum += maxx_digit;
                n -= first;
                digit++;
                //cout<<maxx_digit<<" "<<n<<endl;
            }
        }
    }
    return 0;
}



