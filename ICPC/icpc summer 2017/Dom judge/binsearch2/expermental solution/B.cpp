#include<bits/stdc++.h>
using namespace std;
int search(int right ,long long n , long long x[]){
int mid ,left=0;

while(left<=right)
{
mid=(left+right)/2;
if (n==x[mid])return mid+1;
else if(n>x[mid])
left=mid+1;
else
right=mid-1;
}
return 0;
}
int main(){
    int n,m;
    srand(time(0));

    int i=5;
    ofstream infile("d.in");
    ofstream outfile("d.out");
    while(i-->0){
            n=rand()%100000+1;
            m=rand()%100000+1;
       long long a[n],b[m];
        for(int i=0;i<n;i++)a[i]=rand()%1000000000;
        for(int i=0;i<m;i++)b[i]=rand()%1000000000;
        sort(a,a+n);

        infile<<n<<" "<<m<<endl;
        for(int i=0;i<n;i++)infile<<a[i]<<" ";
        infile<<endl;
        for(int i=0;i<m;i++)infile<<b[i]<<" ";
        infile<<endl;

        long long x=0;
        bool r=true;
        for(int i=0;i<m;i++){
            if(r==true)x=(x+b[i])%1000000000;
            else x=((x-b[i])%1000000000+1000000000)%1000000000;
            int k=search(n-1,x,a);
            if(k!=0){
                outfile<<k<<" ";
                r=true;
            }
            else {
                outfile<<0<<" ";
                r=false;
            }
        }
       outfile<<endl;
    }
}
