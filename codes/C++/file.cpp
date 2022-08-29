#include<iostream>
#include<fstream>
using namespace std;
int main(){

ifstream x("student");
//cout<<x.fail()<<endl;
int n,sum=0;
x.seekg(-9, ios::end);

x>>n;
cout<<n<<endl;
cout<<x.tellg();
}
/*
x.fail()
x.good()
x.eof()
*/
