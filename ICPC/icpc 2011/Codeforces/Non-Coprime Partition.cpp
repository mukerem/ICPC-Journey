#include<iostream>
using namespace std;
int n;
long long res;
void display(){
    if(res%2 == 0){
        cout<<"1 2"<<endl<<n-1<<" ";
        for(int i=1;i<=n;i++){
            if( i== 2)continue;
            cout<<i<<" ";
        }
    }
    else{
        for(long long i = 2;i*i<=res;i++){
            if(res % i ==0){
                cout<<"1 "<<i<<endl<<n-1<<" ";
                for(int j=1;j<=n;j++){
                    if( j== i)continue;
                    cout<<j<<" ";
                }
                return ;
            }
        }
    }

}
int main(){
    cin>>n;
    res = (n*(n+1))/2;
    for(int i=2;i*i<= res;i++){
        if(res%i == 0){
            cout<<"Yes"<<endl;
            display();
            return 0;
        }
    }
    cout<<"No"<<endl;
}
