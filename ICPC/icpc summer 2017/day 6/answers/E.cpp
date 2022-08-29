#include<iostream>
#include<algorithm>
using namespace std;
long long total=0;
int c[1000000],a,b,m=0;
void find(int x,int y){
    total=0;
    m=(x+y)/2;
    for(int i=a-1;i>=0;i--){
        if(c[i]>m)
        total=total+(c[i]-m);
          if(total>b){
                if(x==m){
                     cout<<m<<endl;
                    break;
                }
                else return find(m,y);

          }
         else if(c[i]<m){
            if(total==b||x==m){
            cout<<m<<endl;
            break;
        }
          return find(x,m);
         }
        if(i==0) return find(x,m);

    }

}
int main(){

while(cin>>a&&a!=-1&&cin>>b){
for(int i=0;i<a;i++)cin>>c[i];
sort(c,c+a);
find(0,c[a-1]);
}

}

