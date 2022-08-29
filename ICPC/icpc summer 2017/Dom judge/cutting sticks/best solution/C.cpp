#include<iostream>
#include<algorithm>
using namespace std;
int a;
unsigned int  c[10000],b,m=0 , total=0;
void find(unsigned int x,unsigned int y){
    total=0;
    m=(x+y)/2;
    if(x==m){
            cout<<m<<endl;
        }
    else{
    for(int i=a-1;i>=0;i--){
        if(c[i]>=m)
        total=total+(c[i]/m);
        if((i==0||c[i]<m)&&total==b)
            return find(m,y);
       else  if(total>b) return find(m,y);
        else if((i==0||c[i]<m)&&total<b) return find(x,m);
    }
    }
}
int main(){
while(cin>>a&&a!=-1&&cin>>b){
int r=0,n=0,i;
for( int i=0;i<a;i++){
    cin>>c[i];
    n+=c[i]/b;
    r+=c[i]%b;
    n+=r/b;
    r=r%b;
}
sort(c,c+a);

for( i=n;i>0;i--){
    int sum=0;
    for(int j=0;j<a;j++){
        if(c[j]<i)
        break;
        sum+=c[j]/i;
        if(sum>=b)
            break;
        }
    if(sum>=b)
    break;
}
find(i,n);
}

}

