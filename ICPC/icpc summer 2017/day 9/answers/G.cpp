#include<iostream>
using namespace std;
int main(){
int  a;
while(cin>>a&&a!=-1){
int b[a];
bool c[a];
int k=0,m;
int r=0;
        for(int i=0;i<a;i++)cin>>b[i];
           while(k!=a){
            if(!c[r]){
                cout<<b[r]<<" ";
                c[r]=true;

                r=(r+b[r])%a;
                k++;
            }
            else{
               m=r;
            for(int i=r+1;i<a;i++){
                if(!c[i]){
                    r=i;
                    break;
                }
            }
            if(c[r])
               for(int i=0;i<m;i++){
                if(!c[r]){
                    r=i;
                    break;
                }
            }
           }}
           cout<<endl;
}
}


