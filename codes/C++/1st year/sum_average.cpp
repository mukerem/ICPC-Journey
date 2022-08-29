
#include<iostream>
using namespace std;
int main(){
int n = 10;
int x[n];
for(int i=0;i<n;i++){
cin>>x[i];
}

float sum = 0;
float ave = 0;
for(int i=0;i<n;i++){
sum += x[i];
}
ave = sum/n;
cout<<" The sum is "<<sum<<endl;
cout<<" The average value is "<<ave<<endl;
}
