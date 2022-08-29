
#include<iostream>
using namespace std;

int main(){
double a;
while(cin>>a&&a!=-1){
        for(int i=0;i<a;i++){
                 for(int k=a-1;k>i;k--)
                 cout<<".";
                    for(int k=0;k<=2*i;k++)
                    cout<<"?";
                     for(int k=a-1;k>i;k--)
                 cout<<".";
                 cout<<endl;
            }

        }

}


