#include<iostream>
#include<cmath>
using namespace std;

int main(){
 string a;
while(cin>>a&&a!="-1"){
      unsigned long long  sum=0,i=0;
        while(i!=a.length()){
            char k=a[a.length()-i-1];
            if(k=='1')sum+=1*(long long)pow(6,i);
            else if(k=='3')sum+=2*(long long)pow(6,i);
            else if(k=='4')sum+=3*(long long )pow(6,i);
            else if(k=='5')sum+=4*(long long)pow(6,i);
            else if(k=='7')sum+=5*(long long)pow(6,i);
           else sum+=6*(long long)pow(6,i);
           i++;
        }

            cout<<sum-1<<endl;


}
}


