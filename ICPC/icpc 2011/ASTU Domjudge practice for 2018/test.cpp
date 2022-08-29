
#include<bits/stdc++.h>
using namespace std;
int main(){
char s[] = "BACD", x[] = "0123";
int n=sizeof(x)/sizeof(x[0])-1;
cout<<n<<endl;
do{
    for(int i=0;i<n;i++)
        cout<<s[x[i]-48];
        cout<<endl;
    //cout<<s<<endl;
}while(next_permutation(x,x+4));

}



