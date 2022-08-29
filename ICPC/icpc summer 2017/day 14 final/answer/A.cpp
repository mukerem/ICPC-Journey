
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
long long a;
int main(){

while(cin>>a&&a!=-1){

         int i;
        for( i=0;i<a;i++){
                if(i==a/2){
                for( int j=0;j<2*a-1;j++){
                    if(j<a-i-1||j>a+i-1)
                        cout<<".";
                    else
                      cout<<"A";
                }
                }
                else{
                for( int j=0;j<2*a-1;j++){
                    if(j==a-i-1||j==a+i-1)
                    cout<<"A";
                    else
                    cout<<".";
                }}
        cout<<endl;
            }

}

}

