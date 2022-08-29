#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream bb("identifier");
bb.seekg(6);
string x;
x=bb.get();
//cout<<x<<" "<<bb.tellg();
bb.seekg(0,ios::end);
bb.get();
//cout<<bb.get();
cout<<bb.good()<<bb.bad();

bb.close();
ofstream aa("identifier33");
cout<<aa.good()<<aa.bad();
for(int i=0;i<10;i++){
aa<<i*i<<" ";
}
aa.seekp(5,ios::end);
for(int i=10;i<12;i++){
aa<<i*i<<" ";
}
//cout<<aa.tellp();
cout<<aa.good()<<aa.bad();

aa.close();
}
