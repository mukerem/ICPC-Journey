#include<iostream>
using namespace std;
int main(){
    int a,b,c,d[100],e[100],f[100];
do{
    int p=0,q=0,r=0,s=0;
   cin>>a;
       if(a==-1)break;
    for(int i=0;i<a;i++)
        cin>>d[i];
     cin>>b;
    for(int i=0;i<b;i++)
        cin>>e[i];
         cin>>c;
    for(int i=0;i<c;i++)
        cin>>f[i];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(d[i]==e[j])p++;
            for(int k=0;k<c;k++)
            if(d[i]==e[j]&&d[i]==f[k]) s++;
        }
         for(int j=0;j<c;j++)
            if(d[i]==f[j])q++;

    }
    for(int j=0;j<b;j++)
        for(int k=0;k<c;k++)
            if(e[j]==f[k])r++;
int t=a+b+c-p-q-r+s;
cout<<t<<" = "<<a<<" + "<<b<<" + "<<c<<" - "<<p<<" - "<<q<<" - "<<r<<" + "<<s<<endl;
}while(1);

}
