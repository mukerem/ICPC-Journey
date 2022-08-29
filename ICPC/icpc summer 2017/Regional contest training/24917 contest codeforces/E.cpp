#include<iostream>
#include<math.h>
using namespace std;
int main(){
long long c,a,q,b,l,r,last;
long long sum=0,n[10],m[20],total=0;
cin>>q;
for(long long i=0;i<q;i++){
  cin>>b>>l>>r;
  total=0;
    c=1;
    for(int j=0;j<10;j++)
    n[j]=0;
    for(int i=0;i<b;i++){
        for(int j=1;j<=2;j++){
            if(2*b-2*i-j==2*b-3)
            continue;
           else sum+= i*pow(b,2*b-2*i-j);
        }
    }
    sum+=pow(b,2*b-1);

  if(sum>r)cout<<"00"<<endl;
  else {
    if(sum>l)l=sum;
      a=l;
  while(a>0){
      m[20-c]=a%b;
      n[a%b]++;
    a=a/b;
    c++;


  }
  last=c-1;
  for(int j=0;j<=20-c;j++)
    m[j]=0;

  bool x=true;
   for(int j=0;j<10;j++){
    if(n[j]%2!=0){
        x=false;
         break;
    }
   }
   if(x)total++;
  for(long long j=l+1;j<=r;j++){
        c=20;
        do{

                c--;
        if(last>=20-c){
            n[m[c]]--;
           m[c]=(m[c]+1)%b;
            n[m[c]]++;
        }
        else
        {
            last++;
            n[1]++;
            m[c]=1;
        }

        }  while(m[c]==0);
        x=true;
   for(int j=0;j<10;j++){
    if(n[j]%2!=0){
        x=false;
         break;
    }
   }

   if(x){
    total++;
   }

  }
cout<<total<<endl;
  }
}
}

