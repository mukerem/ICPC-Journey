#include<iostream>
#include<cmath>
using namespace std;
int t;
long long sum;
int factor[66] = {0};
long long n,x;
void count_factor(int x){
    int c = 0;
    for(int i=2;i<x;i++){
        if(x%i == 0){
                c++;
                c -= factor[i];
        }
    }
    factor[x] = c;
}
int main(){
    for(int i = 2;i<65;i++)count_factor(i);
//    for(int i = 2;i<65;idoub
//        if (!factor[i])cout<<i<<" "<<factor[i]<<endl;
//    }

    cin>>t;
    for(int r=0;r<t;r++){
        cin>>n;

        int power = log2(n);
         sum = (long long)(n)-1;
        for(int i=2;i<=power;i++){
           x= int(pow(double(n), double(1.0/double(i))));
            //cout<<i<<" "<<" "<<x<<" "<<(pow(double(x+1) , double(i)))<<" "<<n<<endl;
            //cout<<(pow(double(x+1) , i)) - n<<" **"<<endl;
            unsigned long long total = 1;
            for(int k=0;k<i;k++) {
                   // if(total > 1000000000000000000)
                    total *= (x+1);
            }
            if (total > double(n) ){
                cout<<"yes@";
                x--;
            }


            sum -= x;
            sum += factor[i] * x;
            cout<<i<<" "<<" "<<x<<" "<<total<<endl;
        }
        cout<<sum<<endl;
    }

}
