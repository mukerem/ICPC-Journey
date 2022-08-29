

#include<bits/stdc++.h>
using namespace std;
int happy(int x){
    int sum=0;
    while(x>0){
        int r=x%10;
        sum+=r*r;
        x=x/10;
    }
    return sum;

}

int main(){
int a,b;
cin>>a;
vector <int> c;
while (true){
   int y= happy(a);
   if (y==1) {
        cout<<"HAPPY";
   break;
   }
   else {
    if (count(c.begin(),c.end(),y)){
        cout<<"UNHAPPY"<<endl;
        break;
    }
    else{
        c.push_back(y);
        a=y;
    }

   }
}


}


