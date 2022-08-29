#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#define mx 500005
using namespace std;
int main(){
vector<long long>p,q;
long long maxx=9223372036854775807LL;
long long maxx2=9223372036854775807LL;
long long n=0,m=0,x;
long long a,b,c,d,r,index=0;
cin>>a>>b>>c>>d;


for (int i=0;i<a;i++){
    cin>>r;
   p.push_back(r);
}
        for (int j=0;j<b;j++){
   cin>>r;
   q.push_back(r);
   }
   sort(p.begin(),p.end());
sort(q.begin(),q.end());
for (int i=0;i<a;i++){
       maxx=9223372036854775807LL;
       m=0;
     for (int j=index;j<b;j++){
        x=abs(p[i]-q[j])+abs(c-d);
    if(maxx>x){
        maxx=x;
        m=1;
        index=j;
    }
    else if(maxx==x){
        index=j;
         m++;
    }

    else break;

     }
     if(maxx<maxx2){
        maxx2=maxx;
        n=m;
    }
    else if(maxx==maxx2)
        n+=m;


}
cout<<maxx2<<" "<<n;
return 0;
}
