#include<iostream>
using namespace std;

int main(){
double a;
while(cin>>a&&a!=-1){
        for(int i=0;i<a;i++){
            for(int j=0;j<=i;j++)
                cout<<"\\";
            cout<<endl;
        }

}

}

