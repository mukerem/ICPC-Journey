#include<iostream>
#include<fstream>
using namespace std;
int main(){
string x, y="abc.txt";
ofstream abc("hello.txt");
abc<<"Hello world"<<endl;
abc.close();
ifstream ab;
ab.open(y, ios::in);
int sum=0;
if(!ab.fail()){
while(!ab.eof()){
    getline(ab,x);
    cout<<x<<endl;
    //sum+=x;
}
ab.close();
ofstream bb;
bb.open("abc", ios::app);
if(bb.bad())
for(int i=0;i<5;i++){
bb<<i<<"  "<<i*i*i<<endl;
}
bb.close();
//cout<<sum;
}

}
