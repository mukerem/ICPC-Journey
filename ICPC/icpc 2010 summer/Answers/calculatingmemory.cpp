
#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b;
string c;
while(cin>>a&&a!=-1){
        int sum=0;
        for(int i=0;i<a;i++){
           cin>>c>>b;
            if(c=="char"||c=="bool")sum+=b;
            else if(c=="int"||c=="float")sum+=4*b;
            else sum+=8*b;

        }
    cout<<sum<<endl;

}

}



