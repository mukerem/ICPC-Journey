#include<bits/stdc++.h>
using namespace std;
const int N = 1009;
bool prime[N / 3];
void andalus(){
    prime[0]=true;
    int last = N/3;
    int p=5, i=0, step=1, start=1;
    int s = sqrt(N);
    while (p<=s){
        i++;
        start += start%2? 7:3;
        step += 2;
        if(prime[i])continue;
        p = i%2? 3*i+2: 3*i+1;

        for(int k=start; k<last; k += 2*p)
            prime[k]=true;
        for(int k=start + step; k<last; k += 2*p)
            prime[k]=true;
    }
}
void display(){
    cout<<"2 3 ";
    int last = N/3;
    for(int i = 0; i<last; i++)
        if (!prime[i])
            cout<<(i%2? 3*i+2: 3*i+1)<<" ";
}
int main(){
    andalus();
    display();
}
