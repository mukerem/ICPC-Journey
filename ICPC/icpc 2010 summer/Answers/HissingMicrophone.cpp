

#include<bits/stdc++.h>
using namespace std;
string hiss(string b){
for(int i=0;i<b.length()-1;i++){
    if(b[i]==b[i+1]&&b[i]=='s')return "hiss";
}
return "No hiss";
}
int main(){
string a;
cin>>a;
cout<<hiss(a);

}



