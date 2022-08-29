#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n-->0){
    string s;
    cin>>s;
    //cout<<s.size()<<endl;
    int x=s.size()-1;
     for( int i=s.size()-1;i>=0;i--){
        if(s[i]!='0'){
                                x=i;

                break;
        }
    }
    string a,b;
    for(int i=0;i<=x;i++){
        a=a+s[i];
        b=s[i]+b;
    }
    cout<<(a==b?"YES":"NO")<<endl;
}

}
