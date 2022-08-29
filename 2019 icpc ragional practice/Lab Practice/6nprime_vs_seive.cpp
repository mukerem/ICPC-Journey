#include<bits/stdc++.h>
using namespace std;
#define N 1000000005
bool prime[N/3];
bool prime_seive[N];
//vector<bool> prime(N/3);
//vector<bool> prime_seive(N);
void new_seive(){
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
void seive(){
    prime_seive[0]=true;
    prime_seive[1]=true;
    int s = sqrt(N);
    for(int i=2; i<= s; i++){
        if(prime_seive[i])continue;
        for(int j = i+i; j<=N; j += i){
            prime_seive[j]=true;
        }
    }
}
int main(){
    float x,y;
	clock_t time_req;
	time_req = clock();
    new_seive();
    time_req = clock() - time_req;
	cout << "Using 6nprime function takes " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

	time_req = clock();
    seive();
    time_req = clock()- time_req;
	cout << "Using seive function takes " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

    /*
    cout<<current_time<<endl;
    cout<<current_time2<<endl;
    cout<<current_time3<<endl;

    cout<<"6nprime " << current_time2 - current_time<<endl;
    cout<<"seive " << current_time3 - current_time2<<endl;

    ofstream f("primes");
    int last = N/3;
    f<<"2 3 ";
    int e, c=0;
    */
    int c = 2, d=0;
    for(int i=1; i<N/3; i++)
        if(!prime[i]){
            //if(prime_seive[(i%2? 3*i+2: 3*i+1)])cout<<(i%2? 3*i+2: 3*i+1)<<" ";
            c++;
        }
    //f.close();
    //cout<<e<<endl<<c<<endl;

    for(int i=0; i<N; i++)
        if(!prime_seive[i]){

            d++;
        }
    //f.close();
    cout<<"Number of primes less than 1000000005 is "<<c<<" by using  6nprime algorithm"<<endl;
    cout<<"Number of primes less than 1000000005 is "<<d<<" by using  sieve of Eratosthenes algorithm"<<endl;

}
