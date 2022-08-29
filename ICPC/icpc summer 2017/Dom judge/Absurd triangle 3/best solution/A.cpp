#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double a;
while(cin>>a&&a!=-1){
        int i;
        cout<<"."<<endl;
        for( i=0;i<a-2;i++){
            cout<<"|";
                 cout<<setw(i+1);
                    cout<<"\\"<<endl;

            }
        cout<<"|";
                 for(int k=0;k<i;k++)
                 cout<<"_";
                    cout<<"\\"<<endl;
        }

}


