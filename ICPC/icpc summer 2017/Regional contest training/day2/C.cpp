#include<iostream>
using namespace std;
int main(){
int a,f,b,k,d=0;
cin>>a>>b>>f>>k;
int m=b;
if(k==1&&(f>b||(a-f)>b))cout<<-1;
else if(k==2&&2*(a-f)>b)cout<<-1;
else if(k>2&&(2*f>b||2*(a-f)>b))cout<<-1;
else{
b=b-f;
for(int i=0;i<k;i++){

    if(i==k-1){
        if(i%2==0){
            if((a-f)>b)
            d++;

  }
  else{
    if(f>b)
        d++;

        }
    }
  else if(i%2==0){
    if(2*(a-f)<=b){
        b-=2*(a-f);
    }
    else
    {
        d++;
        b=m;
        if(i<k-1){
if(i%2==0)b-=2*(a-f);
else b-=2*f;}

    }
  }
  else{
    if(2*f<=b){
        b-=2*f;
    }
    else
    {

        d++;
        b=m;
        if(i<k-1){
if(i%2==0)b-=2*(a-f);
else b-=2*f;}

    }
  }


}
cout<<d;
}
}
