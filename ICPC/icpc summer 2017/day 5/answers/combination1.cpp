#include<iostream>
#include<algorithm>
using namespace std;
long long c,k=0;
int a,b,d[13];
long long factorial(int n){
if(n==0)return 1;
else return factorial(n-1)*n;
}
void PermGenerator(){
int m[b];
{    for(int i=0;i<a;i++)
    d[i]=i+1;
    do
    {

        if(k++%c==0){
                bool r=true;
            for (int i = 0; i < b; i++)
            {   m[i]=d[i];
                if(i>0&&m[i]<m[i-1]){
                 r=false; break;
                }

            }
            if(r){
        for(int i=0;i<b;i++){
             cout << m[i] << " ";
                if (i == b-1) cout << endl;
        }
            }
        }
    } while (next_permutation(d, d+a));
}}
int main(){
while(cin>>a&&a!=-1&&cin>>b){
       c= factorial(a-b);
    PermGenerator();
}
}

