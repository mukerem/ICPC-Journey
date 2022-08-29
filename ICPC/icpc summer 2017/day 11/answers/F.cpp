#include<iostream>
using namespace std;
int a,b,c[10000],d[10000];
int findmin(int m){
int minn=d[0] , index=0;
for(int i=1;i<m;i++){
        if(minn>d[i]){
            minn=d[i];
            index = i;
        }
}
return index;
}
int findmax(int m){
int maxx=d[0] ;
for(int i=1;i<m;i++){
        if(maxx<d[i]){
            maxx=d[i];
        }
}
return maxx;
}
int calculate(){

    for(int i=1;i<a;i++){
    for(int j=0;j<i;j++)
        d[j]=c[j];

    for(int j=i;j<a;j++){
       int r= findmin(i);
       d[r]+=c[j];
       if(d[r]>b){
        break;
       }

    }
    int m=findmax(i);
    if(m<=b)
    return i;
    }

return a;
    }
int main(){

while(cin>>a&&a!=-1&&cin>>b){
        for(int i=0;i<a;i++){
            cin>>c[i];
            }
            cout<<calculate()<<endl;
        }

}




