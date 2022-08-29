#include<bits/stdc++.h>
using namespace std;
long long n,m,x;
void display(int r, double N){
    long long sum = 0, hei = 0;
    for(int i=0;i<r;i++){
        sum += round(pow(N, float(i)));
        hei += round(pow(float(N+1), float(i))) * round(pow(N, float(r-i)));
    }
    hei += round(pow(float(N+1), float(r)));
    cout<<sum<<" "<<hei<<endl;
}
int main(){

    while(true){
        cin>>n>>m;
        if(!(n||m))break;
        if (n == m){
            display(0, double(n));
            continue;
        }
        for(int r=1;;r++){
            double N = pow(m,1.0/r);
            if(abs(N - round(N)) <0.0000001){
                double M = pow(n,1.0/r);
                if(abs(M - N -1) <0.0000001){
                    display(r,N);
                    break;
                }
            }
        }

    }
}
