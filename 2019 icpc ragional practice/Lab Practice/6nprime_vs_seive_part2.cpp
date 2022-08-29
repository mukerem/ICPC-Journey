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
    long long p1, p2=1, start1, start2, n=0;
    int s = sqrt(N);
    while (p2<=s){
        n++;
        p1 = 6*n - 1;
        p2 = 6*n + 1;
        if(!prime[2*n - 1]){
            start1 = 12 * n*n - 4 * n;
            start2 = 12 * n*n - 1;
            for(long long k=start1; k<last; k += 2*p1)
                prime[k]=true;
            for(long long k=start2; k<last; k += 2*p1)
                prime[k]=true;
        }
        if(!prime[2*n]){
            start1 = 12 * n*n + 4 * n;
            start2 = 12 * n*n + 12 * n + 1;
            for(long long k=start1; k<last; k += 2*p2)
                prime[k]=true;
            for(long long k=start2; k<last; k += 2*p2)
                prime[k]=true;
        }
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
