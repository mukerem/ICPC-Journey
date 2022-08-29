
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double a;
while(cin>>a&&a!=-1){
        int i;
        for(int i=0;i<a-1;i++)
            cout<<" ";
        cout<<"."<<endl;
        for( i=0;i<a-2;i++){
            for(int k=a-3;k>=i;k--)
            cout<<" ";
                    cout<<"/";

        for(int k=0;k<i;k++)
            cout<<" ";
                    cout<<"|"<<endl;
            }
        cout<<"/";
                 for(int k=0;k<i;k++)
                 cout<<"_";
                    cout<<"|"<<endl;
        }

}


