
#include<bits/stdc++.h>
using namespace std;

int main(){
int b,a;

vector <int> c;
for(int i=0;i<10;i++){
    cin>>a;
    b=a%42;
    if (count(c.begin(),c.end(),b)==0)c.push_back(b);
}
cout<<c.size();

}



