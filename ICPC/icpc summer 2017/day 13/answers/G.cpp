#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
long long a,b,c;
while(cin>>a&&a!=-1&&cin>>b>>c){
        if(b==1)cout<<"(1) ";
        else {
        if(b-c>1){
            cout<<"<< ";
        for(int i=b-c;i<b;i++)cout<<i<<" ";
        }
        else  for(int i=1;i<b;i++)cout<<i<<" ";
        cout<<"("<<b<<") ";
        }
          if(b+c<a){
        for(int i=b+1;i<=b+c;i++)cout<<i<<" ";
         cout<<">> ";
         }
         else         for(int i=b+1;i<=a;i++)cout<<i<<" ";

cout<<endl;
}

}

