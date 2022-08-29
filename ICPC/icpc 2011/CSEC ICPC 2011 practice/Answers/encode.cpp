#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string s,c;
cin>>n;
for(int i = 0;i<n;i++){
    cin>>s;
    int t = sqrt(s.size()), m=0;
    char str[t][t];
    for(int k=0;k<t;k++){
        for(int j =t-1;j>=0;j--){

            str[j][k]=s[m];
            m++;
        }
    }
    for(int k=t;k>0;k--){
        for (int j = 0;j<t;j++)
            c += s[k+j*t-1];
    }
    for (int k=0;k<t;k++)
        for(int j=0;j<t;j++)
        cout<<str[k][j];
    cout<<endl;
}
}
