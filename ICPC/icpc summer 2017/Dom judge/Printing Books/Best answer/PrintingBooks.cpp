
#include<bits/stdc++.h>
using namespace std;
long long n,x,t;
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
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>x;
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
                cout<<n/digit<<endl;
            }
            else cout<<-1<<endl;
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
                        cout<<sum + n/digit<<endl;
                    }
                    else cout<<-1<<endl;
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



