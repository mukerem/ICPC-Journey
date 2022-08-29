#include<iostream>
using namespace std;
int main(){
int x[5];
int *pt = x;
for(int i=0;i<5;i++){
cin>>*pt;
pt++;
}
for(int i=0;i<5;i++){
pt--;
cout<<*pt<<"  ";
}
}
