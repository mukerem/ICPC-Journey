#include<iostream>
#include<fstream>
using namespace std;

int main(){
ifstream x;
x.open("number.txt");
string a;
x.seekg(37, ios::beg);
x>>a;
cout<<a<<endl;
x.seekg(-5, ios::cur);
x>>a;
cout<<a<<endl;
cout<<x.tellg();
}
