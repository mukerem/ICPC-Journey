#include<iostream>
using namespace std;
int n,m,k,q;
int main(){
    cin>>q;
    for(int u=0;u<q;u++){
        cin>>n>>m>>k;
        if (m>n)swap(n,m);

        if(n%2 != m%2){
            n--;
            k--;
        }
        else if(n%2 != k%2){
            n--;m--;k-=2;
        }

        if(k<n) {
            cout<<-1<<endl;
        }
        else
            cout<<k<<endl;
    }

}
