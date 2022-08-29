#include<iostream>
#include<iomanip>
using namespace std;

int main(){
string a,b;
while(cin>>a&&a!="-1"&&cin>>b){
int m=a.length();
int n=b.length();
        int maxx=m>n?m:n;
        char c[maxx+1];
        int d[maxx+1];
string r="";
for(int i=0;i<maxx-m;i++)
    r+="0";
a=r+a;
string p="";
for(int i=0;i<maxx-n;i++)
    p+="0";
b=p+b;
         c[maxx]='0';
        for(int i=1;i<=maxx;i++){
            if(a[maxx-i]+b[maxx-i]+c[maxx-i+1]>=154)
            c[maxx-i]='1';
            else c[maxx-i]='0';
            if(a[maxx-i]+b[maxx-i]+c[maxx-i+1]>=154)
            d[maxx-i+1]=(a[maxx-i]+b[maxx-i]+c[maxx-i+1]-154);
            else   d[maxx-i+1]=(a[maxx-i]+b[maxx-i]+c[maxx-i+1]-144);
        }
       d[0]=c[0]-48;
        cout<<" ";
        for(int i=0;i<=maxx;i++){
            if(c[i]=='1')cout<<1;
            else cout<<" ";
        }
        cout<<endl;
        for(int i=0;i<2+maxx-m;i++)
            cout<<" ";
        for(int i=maxx-m;i<maxx;i++)

        cout<<a[i];
        cout<<endl<<"+ ";
         for(int i=0;i<maxx-n;i++)
            cout<<" ";
        for(int i=maxx-n;i<maxx;i++)
        cout<<b[i];
        cout<<endl;
        for(int i=0;i<=maxx+1;i++)
        cout<<"=";
        cout<<endl;
        if(d[0]==1)cout<<" ";
        else cout<<"  ";
        if(d[0]==1)cout<<1;
         for(int i=1;i<=maxx;i++)
            cout<<d[i];
            cout<<endl;
}

}




