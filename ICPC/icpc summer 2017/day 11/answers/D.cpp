#include<iostream>
#include<iomanip>
using namespace std;
int c[100];
int main(){
int a,b;
while(cin>>a&&a!=-1&&cin>>b){
    int total=0;
        for(int i=0;i<a;i++){
            cin>>c[i];
           total+=c[i]/b;
            }
            cout<<total<<endl;
        }

}



